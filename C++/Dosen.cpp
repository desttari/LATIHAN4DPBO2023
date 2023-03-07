#include <iostream>
#include <string>
using namespace std;
#include "Dosen.h"

// constructor
Dosen::Dosen(std::string NIP, int NIK, std::string nama, std::string jenis_kelamin, std::string fakultas, std::string prodi, std::string pend_terakhir, std::string keahlian, std::string asal_universitas, std::string email_edu)
    : Human(NIK, nama, jenis_kelamin), SivitasAkademik(asal_universitas, email_edu)
{
    this->_NIP = NIP;
    this->_pend_terakhir = pend_terakhir;
    this->_keahlian = keahlian;
    this->_fakultas = fakultas;
    this->_prodi = prodi;
    this->_courses = {};
}
 
// getter dan setter
string Dosen::getNIP() {
    return _NIP;
}

void Dosen::setNIP(string NIP) {
    _NIP = NIP;
}

string Dosen::getFakultas() {
    return _fakultas;
}

void Dosen::setFakultas(string fakultas) {
    _fakultas = fakultas;
}

string Dosen::getProdi() {
    return _prodi;
}

void Dosen::setProdi(string prodi) {
    _prodi = prodi;
}

string Dosen::getPendidikanTerakhir() {
    return _pend_terakhir;
}

void Dosen::setPendidikanTerakhir(string pend_terakhir) {
    _pend_terakhir = pend_terakhir;
}

string Dosen::getKeahlian() {
    return _keahlian;
}

void Dosen::setKeahlian(string keahlian) {
    _keahlian = keahlian;
}

list<Course> Dosen::get_courses() {
    return _courses;
}

// menambahkan course pada list _courses
void Dosen::tambah_course(Course course) {
    _courses.push_back(course);
}
