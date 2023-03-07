#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <iostream>
#include <string>
#include <list>
#include "Human.h"
#include "SivitasAkademik.h"
#include "Course.h"

class Mahasiswa: public Human, public SivitasAkademik {
private:
    int _NIM;
    std::string _fakultas;
    std::string _prodi;
    std::list<std::string> _courses;

public:
    // constructor
    Mahasiswa(int NIM, int NIK, std::string nama, std::string jenis_kelamin, std::string fakultas, std::string prodi, std::string asal_universitas, std::string email_edu);

    // copy constructor
    Mahasiswa(Mahasiswa& mhs);

    // method get dan set
    int getNIM();
    void setNIM(int NIM);
    std::string getFakultas();
    void setFakultas(std::string fakultas);
    std::string getProdi();
    void setProdi(std::string prodi);
    std::list<std::string> get_courses();
    void tambah_course(std::string course);
    void hapus_course(std::string course);
};

#endif
