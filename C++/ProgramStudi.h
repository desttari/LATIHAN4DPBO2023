#ifndef PROGRAM_STUDI_H
#define PROGRAM_STUDI_H

#include <iostream>
#include <string>
#include <list>
#include "Course.h"

class ProgramStudi {
private:
    std::string _nama_prodi;
    std::string _kode;
    std::list<Course> _courses;

public:
    // constructor
    ProgramStudi(std::string nama_prodi, std::string kode, std::list<Course> courses = {});

    // getter dan setter
    std::string getNamaProdi();
    void setNamaProdi(std::string nama_prodi);
    std::string getKode();
    void setKode(std::string kode);
    std::list<Course> getCourses();
    void setCourses(std::list<Course> courses);

    // menambah dan menghapus courses yang diambil oleh programstudi
    void tambahCourse(Course course);
    void hapusCourse(Course course);
};

#endif
