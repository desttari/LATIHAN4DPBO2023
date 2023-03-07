#ifndef SIVITAS_AKADEMIK_H
#define SIVITAS_AKADEMIK_H

#include <string>
using namespace std;

class SivitasAkademik {
private:
    std::string _asal_universitas;
    std::string _email_edu;
public:
    // constructor,Inisialisasi atribut
    SivitasAkademik(const std::string& asal_universitas, const std::string& email_edu);

    // getter dan setter
    string getAsalUniversitas();
    void setAsalUniversitas(string asal_universitas);

    string getEmailEdu();
    void setEmailEdu(string email_edu);
};

#endif // SIVITAS_AKADEMIK_H
