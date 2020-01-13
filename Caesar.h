#ifndef _caesar_h
#define _caesar_h
#include <string>
#include <fstream>

		//QUESTION 2a


class Caesar: public Encrypt {

public:

    Caesar();

    std::string encode();

    std::string decode();

private:
	int m_k;
};


#endif