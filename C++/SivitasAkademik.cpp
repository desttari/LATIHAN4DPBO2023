#include <iostream>
#include <string>
using namespace std;
#include "SivitasAkademik.h"

// constructor,Inisialisasi atribut
SivitasAkademik::SivitasAkademik(const string& asal_universitas, const string& email_edu) {
    this->_asal_universitas = asal_universitas;
    this->_email_edu = email_edu;
}


// getter dan setter
string SivitasAkademik::getAsalUniversitas() {
    return _asal_universitas;
}

void SivitasAkademik::setAsalUniversitas(string asal_universitas) {
    _asal_universitas = asal_universitas;
}

string SivitasAkademik::getEmailEdu() {
    return _email_edu;
}

void SivitasAkademik::setEmailEdu(string email_edu) {
    _email_edu = email_edu;
}
