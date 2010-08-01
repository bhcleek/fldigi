#ifndef ADIFIO
#define ADIFIO

#include <cstdio>
#include <cstring>

#include "qso_db.h"

#define ADIF_VERS "2.2.3"

/* STATION_CALLSIGN & CREDIT_SUBMITTED are the longest field names 
 * in ADIF v2.2.6 spec 
 */
const int FieldLabelMaxLen = 16; 

class cAdifIO {
private:
	bool write_all;
	cQsoRec adifqso;
	FILE *adiFile;
	void fillfield(int, char *);
	std::string log_checksum;
	std::string file_checksum;
public:
	cAdifIO ();
	~cAdifIO () {};
	int readAdifRec () {return 0;};
	int writeAdifRec () {return 0;};
	void readFile (const char *, cQsoDb *);
	int writeFile (const char *, cQsoDb *);
	int writeLog (const char *, cQsoDb *);
	bool log_changed(const char *fname);
	std::string get_checksum() { return log_checksum; }
	void set_checksum( std::string s ) { log_checksum = s; }
	std::string get_file_checksum() { return file_checksum; }
	void do_checksum(cQsoDb &);
};

// crc 16 cycle redundancy check sum

class Ccrc16 {
private:
	unsigned int crcval;
	char ss[5];
public:
	Ccrc16() { crcval = 0xFFFF; }
	~Ccrc16() {};
	void reset() { crcval = 0xFFFF;}
	unsigned int val() {return crcval;}
	std::string sval() {
		snprintf(ss, sizeof(ss), "%04X", crcval);
		return ss;
	}
	void update(char c) {
		crcval ^= c;
        for (int i = 0; i < 8; ++i) {
            if (crcval & 1)
                crcval = (crcval >> 1) ^ 0xA001;
            else
                crcval = (crcval >> 1);
        }
	}
	unsigned int crc16(char c) { 
		update(c); 
		return crcval;
	}
	unsigned int crc16(std::string s) {
		reset();
		for (size_t i = 0; i < s.length(); i++)
			update(s[i]);
		return crcval;
	}
	std::string scrc16(std::string s) {
		crc16(s);
		return sval();
	}
};


#endif
