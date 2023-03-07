#ifndef HUMAN_H
#define HUMAN_H

#include <string>
using namespace std;

class Human {
private:
    int _NIK;
    std::string _nama;
    std::string _jenis_kelamin;
public:
    // constructor,Inisialisasi atribut NIK, nama, dan jenis kelamin
    Human(int NIK, std::string nama, std::string jenis_kelamin);

    // getter dan setter
    int getNIK();
    void setNIK(int NIK);

    string getNama();
    void setNama(string nama);

    string getJenisKelamin();
    void setJenisKelamin(string jenis_kelamin);
};

#endif // HUMAN_H
