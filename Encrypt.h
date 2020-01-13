
#include <fstream>
#include <string>

class Encrypt{

public:

    Encrypt();

    std::string getPlain() const;

    std::string getCipher() const;

    bool read(bool isPlain, std::string filename);

    bool write(bool isPlain, std::string filename);

    std::string encode(m_plain,m_cipher);

    std::string decode(m_plain,m_cipher);

protected:

    std::string m_plain;

    std::string m_cipher;

};
