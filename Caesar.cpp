	#include"Caesar.h"
	#include <string>
	#include <iostream>
	using namespace std;

	const char alpha[26]{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	int main()
	{

		Caesar::Caesar(int k){
			m_k=k;
		}
	 	Caesar C;
		
		std::string Caesar::encode()
		{
		/*tring message; // Définit une variable pour stocker la chaine du message.
	 		int k=3;//	 Définit une variable entière pour la clé de cryptage/décryptage.
	 		cout<<"Donnez le message à crypter >"; // On affiche la demande (sans passer à la ligne).
	 		getline(cin,message); // Demande le message complet à l'utilisateur.
	 		cout<<"Donnez la clé numérique de cryptage>";
	 		cin>>k;
	 	*/

	 	for(string::size_type i=0;i<m_plain.length();i++){
	 		char letter = m_plain[i];
	 		for(int k=0;k<26;k++){
	 			if(letter==alpha[k]){
	 				int v;
	 				v=(k+m_k)%26;
	 				m_plain[i] = alpha[v]
	 			}
	 		}
	 	}

	 /*  

		td::string Caesar::encode() {
		char lettres[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','\0'} ;
		for(std::string::size_type i=0; i< m_plain.length(); i++){
			char lettre = m_plain[i];
			for ( int k=0; k<26;k++){
				if (lettre == lettres[k]){
					int l ;
					l = (k+ m_k)%26;
					m_plain[i] = lettres[l];
				}
			}

		}
		m_cipher = m_plain ;
		std::cout << m_cipher <<std::endl;
		return m_cipher;

	 */

	 		m_cipher=m_plain;

	 		cout<<"Le message crypté est :"<< m_cipher<<endl;
	 		return m_cipher;
		}





	    std::string Caesar::decode()
	    {

	   /*tring message; // Définit une variable pour stocker la chaine du message.
	 	int k=3;// Définit une variable entière pour la clé de cryptage/décryptage.
	 	cout<<"Donnez le message à décrypter >"; // On affiche la demande (sans passer à la ligne).
	 	getline(cin,message); // Demande le message complet à l'utilisateur.
	 	cout<<"Donnez la clé numérique de décryptage >";
	 	cin>>k;
*/		
	    	for(string::size_type i=0;i<m_plain.length();i++){
	 		char letter = m_plain[i];
	 		for(int k=0;k<26;k++){
	 			if(letter==alpha[k]){
	 				int v;
	 				v=(k+26-m_k)%26;
	 				m_cipher[i] = alpha[v]
	 			}
	 		}
	 	}

	 	m_plain=m_cipher;

	 	cout<<"Le message décrypté est :" << m_plain<<endl;
	 	
	 	return m_plain;
		}





	return 0;
	}