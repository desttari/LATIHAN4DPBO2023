#ifndef DOSEN_H
#define DOSEN_H

#include <string>
#include <list>
#include "Human.h"
#include "SivitasAkademik.h"
#include "Course.h"

class Dosen : public Human, public SivitasAkademik {
private:
    std::string _NIP;
    std::string _fakultas;
    std::string _prodi;
    std::string _pend_terakhir;
    std::string _keahlian;
    std::list<Course> _courses;

public:
    // constructor
    Dosen(std::string NIP, int NIK, std::string nama, std::string jenis_kelamin,
          std::string fakultas, std::string prodi, std::string pend_terakhir,
          std::string keahlian, std::string asal_universitas, std::string email_edu);

    // getter dan setter
    std::string getNIP();
    void setNIP(std::string NIP);

    std::string getFakultas();
    void setFakultas(std::string fakultas);

    std::string getProdi();
    void setProdi(std::string prodi);

    std::string getPendidikanTerakhir();
    void setPendidikanTerakhir(std::string pend_terakhir);

    std::string getKeahlian();
    void setKeahlian(std::string keahlian);

    std::list<Course> get_courses();

    // menambahkan course pada list _courses
    void tambah_course(Course course);
};

#endif
