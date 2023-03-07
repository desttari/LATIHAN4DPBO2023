#include "ProgramStudi.h"

// constructor
ProgramStudi::ProgramStudi(std::string nama_prodi, std::string kode, std::list<Course> courses)
    : _nama_prodi(nama_prodi), _kode(kode), _courses(courses) {}

// getter dan setter
std::string ProgramStudi::getNamaProdi() {
    return _nama_prodi;
}

void ProgramStudi::setNamaProdi(std::string nama_prodi) {
    _nama_prodi = nama_prodi;
}

std::string ProgramStudi::getKode() {
    return _kode;
}

void ProgramStudi::setKode(std::string kode) {
    _kode = kode;
}

std::list<Course> ProgramStudi::getCourses() {
    return _courses;
}

void ProgramStudi::setCourses(std::list<Course> courses) {
    _courses = courses;
}

// menambah dan menghapus courses yang diambil oleh programstudi
void ProgramStudi::tambahCourse(Course course) {
    _courses.push_back(course);
}

void ProgramStudi::hapusCourse(Course course) {
    _courses.remove(course);
}
