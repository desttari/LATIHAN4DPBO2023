#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
using namespace std;

class Course {
private:
    string _nama_matakuliah;

public:
    // constructor
    Course(string nama_matakuliah);

    // getter dan setter
    std::string getNamaMatakuliah() const;
    void setNamaMatakuliah(string nama_matakuliah);

    // operator ==
    bool operator==(const Course& other) const {
        return this->getNamaMatakuliah() == other.getNamaMatakuliah();
    }
};

#endif
