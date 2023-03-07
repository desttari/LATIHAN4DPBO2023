#include <iostream>
#include <string>
#include <list>
using namespace std;
#include "Mahasiswa.h"

// constructor
Mahasiswa::Mahasiswa(int NIM, int NIK, string nama, string jenis_kelamin, string fakultas, string prodi, string asal_universitas, string email_edu)
    : Human(NIK, nama, jenis_kelamin), SivitasAkademik(asal_universitas, email_edu) {
    _NIM = NIM;
    _fakultas = fakultas;
    _prodi = prodi;
}

// copy constructor
Mahasiswa::Mahasiswa(Mahasiswa& mhs)
    : Human(mhs.getNIK(), mhs.getNama(), mhs.getJenisKelamin()), SivitasAkademik(mhs.getAsalUniversitas(), mhs.getEmailEdu()) {
    _NIM = mhs.getNIM();
    _fakultas = mhs.getFakultas();
    _prodi = mhs.getProdi();
    _courses = mhs.get_courses();
}

// method get dan set
int Mahasiswa::getNIM() {
    return _NIM;
}

void Mahasiswa::setNIM(int NIM) {
    _NIM = NIM;
}

string Mahasiswa::getFakultas() {
    return _fakultas;
}

void Mahasiswa::setFakultas(string fakultas) {
    _fakultas = fakultas;
}

string Mahasiswa::getProdi() {
    return _prodi;
}

void Mahasiswa::setProdi(string prodi) {
    _prodi = prodi;
}

list<string> Mahasiswa::get_courses() {
    return _courses;
}

// menambah dan menghapus courses yang diambil oleh mahasiswa
void Mahasiswa::tambah_course(string course) {
    _courses.push_back(course);
}

void Mahasiswa::hapus_course(string course) {
    _courses.remove(course);
}
