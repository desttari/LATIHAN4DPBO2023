#include <iostream>
#include <string>
using namespace std;
#include "Human.h"

// constructor,Inisialisasi atribut NIK, nama, dan jenis kelamin
Human::Human(int NIK, string nama, string jenis_kelamin) {
    _NIK = NIK;
    _nama = nama;
    _jenis_kelamin = jenis_kelamin;
}

// getter dan setter
int Human::getNIK() {
    return _NIK;
}

void Human::setNIK(int NIK) {
    _NIK = NIK;
}

string Human::getNama() {
    return _nama;
}

void Human::setNama(string nama) {
    _nama = nama;
}

string Human::getJenisKelamin() {
    return _jenis_kelamin;
}

void Human::setJenisKelamin(string jenis_kelamin) {
    _jenis_kelamin = jenis_kelamin;
}
