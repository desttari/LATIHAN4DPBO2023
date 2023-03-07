#include <iostream>
#include <string>
#include <vector>
#include "Human.h"
#include "Mahasiswa.h"
#include "Dosen.h"
#include "ProgramStudi.h"

using namespace std;

int main() {
    // membuat objek mahasiswa
    Mahasiswa mhs1(190001, 10001, "Cloe", "Perempuan", "Fakultas Ilmu Komputer", "Teknik Informatika", "Universitas A", "me@edu.com");
    mhs1.tambah_course("Pemrograman Dasar");
    mhs1.tambah_course("Algoritma dan Struktur Data");
    mhs1.tambah_course("Basis Data");

    Mahasiswa mhs2(190002, 10002, "Iggi", "Laki-laki", "Fakultas Ilmu Komputer", "Teknik Informatika", "Universitas A", "iggi@edu.com");
    mhs2.tambah_course("Algoritma dan Struktur Data");
    mhs2.tambah_course("Pemrograman Web");
    mhs2.tambah_course("Basis Data");

    // membuat objek dosen
    Dosen dosen1("001", 20001, "Shee", "Laki-laki", "Fakultas Ilmu Komputer", "Teknik Informatika", "S2 Teknik Informatika", "Pemrograman Web", "Universitas A", "Shee@edu.com");
    dosen1.tambah_course(Course("Pemrograman Web"));
    dosen1.tambah_course(Course("Rekayasa Perangkat Lunak"));

    Dosen dosen2("002", 20002, "Ave", "Perempuan", "Fakultas Ilmu Komputer", "Sistem Informasi", "S3 Sistem Informasi", "Keamanan Informasi", "Universitas A", "Ave@edu.com");
    dosen2.tambah_course(Course("Keamanan Informasi"));
    dosen2.tambah_course(Course("Manajemen Proyek"));

    // membuat vector dosens dan menambahkan objek dosen ke dalamnya
    vector<Dosen> dosens;
    dosens.push_back(dosen1);
    dosens.push_back(dosen2);

    // membuat objek program studi
    ProgramStudi prodi("Teknik Informatika", "TI", { Course("Pemrograman Dasar"), Course("Algoritma dan Struktur Data"), Course("Basis Data") });

    // menampilkan daftar NIM mahasiswa
    cout << "Daftar NIM Mahasiswa: " << endl;
    cout << mhs1.getNIM() << endl;
    cout << mhs2.getNIM() << endl;


    // menampilkan identitas mahasiswa berdasarkan NIM
    int cariNIM;
    cout << "\nMasukkan NIM mahasiswa: ";
    cin >> cariNIM;
    if (cariNIM == mhs1.getNIM()) {
        cout << "\nIdentitas Mahasiswa: " << endl;
        cout << "Nama: " << mhs1.getNama() << endl;
        cout << "NIK: " << mhs1.getNIK() << endl;
        cout << "Jenis Kelamin: " << mhs1.getJenisKelamin() << endl;
        cout << "Fakultas: " << mhs1.getFakultas() << endl;
        cout << "Program Studi: " << mhs1.getProdi() << endl;
        cout << "Asal Universitas: " << mhs1.getAsalUniversitas() << endl;
        cout << "Email: " << mhs1.getEmailEdu() << endl;
        cout << "Daftar Course:" << endl;
        list<string> courses = mhs1.get_courses();
        if (courses.empty()) {
            cout << "Tidak ada course yang diambil.\n" << endl;
        }
        else {
            for (string course : courses) {
                cout << "- " << course << endl;
            }
        }
    }
    else if (cariNIM == mhs2.getNIM()) {
        cout << "\nIdentitas Mahasiswa: " << endl;
        cout << "Nama: " << mhs2.getNama() << endl;
        cout << "NIK: " << mhs2.getNIK() << endl;
        cout << "Jenis Kelamin: " << mhs2.getJenisKelamin() << endl;
        cout << "Fakultas: " << mhs2.getFakultas() << endl;
        cout << "Program Studi: " << mhs2.getProdi() << endl;
        cout << "Asal Universitas: " << mhs2.getAsalUniversitas() << endl;
        cout << "Email: " << mhs2.getEmailEdu() << endl;
        cout << "Daftar Course:" << endl;
        list<string> courses = mhs2.get_courses();
        if (courses.empty()) {
            cout << "Tidak ada course yang diambil.\n" << endl;
        }
        else {
            for (string course : courses) {
                cout << "- " << course << endl;
            }
        }
    }
    else {
        cout << "Mahasiswa dengan NIM " << cariNIM << " tidak ditemukan.\n" << endl;
    }

    // menampilkan daftar NIP dosen
    cout << "\nDaftar NIP Dosen: " << endl;
    for (Dosen& dsn : dosens) {
        cout << dsn.getNIP() << endl;
    }
    // mencari dosen berdasarkan NIP
    string cariNIP;
    cout << "\nMasukkan NIP dosen: ";
    cin >> cariNIP;
    for (Dosen& dsn : dosens) {
        if (dsn.getNIP() == cariNIP) {
            cout << "\nIdentitas Dosen: " << endl;
            cout << "Nama: " << dsn.getNama() << endl;
            cout << "NIK: " << dsn.getNIK() << endl;
            cout << "Jenis Kelamin: " << dsn.getJenisKelamin() << endl;
            cout << "Fakultas: " << dsn.getFakultas() << endl;
            cout << "Program Studi: " << dsn.getProdi() << endl;
            cout << "Email: " << dsn.getEmailEdu() << endl;
            cout << "Pendidikan Terakhir: " << dsn.getPendidikanTerakhir() << endl;
            cout << "Keahlian: " << dsn.getKeahlian() << endl;
            cout << "Mata Kuliah yang diajar: " << endl;
            for (Course& crs : dsn.get_courses()) {
                cout << "- " << crs.getNamaMatakuliah() << endl;
            }
            return 0;
        }
    }

    cout << "\nDosen dengan NIP " << cariNIP << " tidak ditemukan." << endl;
    return 0;
};