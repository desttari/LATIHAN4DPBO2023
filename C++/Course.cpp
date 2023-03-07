#include <iostream>
#include <string>
using namespace std;
#include "Course.h"

// constructor
Course::Course(string nama_matakuliah) {
    _nama_matakuliah = nama_matakuliah;
}

// getter dan setter
string Course::getNamaMatakuliah() const{
    return _nama_matakuliah;
}

void Course::setNamaMatakuliah(string nama_matakuliah) {
    _nama_matakuliah = nama_matakuliah;
}
