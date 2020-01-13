#include <fstream>
#include <iostream>
using namespace std;
#include<string>
#include"Encrypt.h"


int main(){



				//QUESTION 1b

Encrypt::Encrypt()//string m_cipher(cipher),string m_plain(plain))
{

};

string Encrypt::getPlain() const
{
	return m_plain;
}
string Encrypt::getCipher() const
{
	return m_cipher;
}



bool Encrypt::read(bool isPlain, std::string filename)
{
	ifstream file(filename)
	string line;
	string lines;

	if (file)
	{

		while(getline::(file,lines)){
			line+=lines + "\n";

		}
	}

	else
	{
		cout<<"Impossible de lire le fichier "<<file<<<<endl;
		return false;
	}


	if (isPlain==true){
		m_plain=line;
	}
	
	else{
		m_cipher=line;
	}
	return true;
}

bool Encrypt::write(bool isPlain, std::string filename);
{	
	ofstream file(filename);

	if(file){

		if (isPlain==true){
			file<<m_plain<<endl;
		}
		
		else{
			file<<m_cipher<<endl;
		}

		return true;
	}

	else{
		cout<<"Impossible d'écrire dans le fichier "<<file<<endl;

		return false;
	}

}


string Encrypt::encode(m_plain,m_cipher)
{
	m_cipher = m_plain;
	return m_cipher;
}

string Encrypt::decode(m_plain,m_cipher)
{
	m_plain = m_cipher;
	return m_plain;
}

return 0;
}