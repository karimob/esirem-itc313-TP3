#include <iostream>
using namespace std;
#include<string>
#include"Encrypt.h"



int main()
{

string filename;
filename="betch";
Encrypt E;


//lire le fichier
E.read(true,filename);
cout<<E.getPlain()<<endl;

//ecrire dans le fichier
E.encode();
E.write(false,filename);

return 0;
}







/*int main(){
	Encrypt *Cryp ;
	Caesar *Ck = new Caesar(3);
	Cryp = Ck ;
	std::string fichier ;
	fichier = "abc";
	
	
	//message a encoder
	Ck->read(false, fichier);
	Ck->encode();
	Ck->write( true ,fichier);
	return 0 ;
}