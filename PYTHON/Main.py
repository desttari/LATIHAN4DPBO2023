# imort class
from ProgramStudi import ProgramStudi
from Course import Course
from Dosen import Dosen
from Mahasiswa import Mahasiswa

if __name__ == "__main__":
    # Membuat objek mahasiswa
    mhs1 = Mahasiswa("001", "123456789", "Iggi", "Laki-laki", "Fakultas Teknik",
                     "Teknik Informatika", "Universitas Pendidikan Indonesia", "Iggi@ui.ac.id")
    mhs2 = Mahasiswa("002", "987654321", "Siti", "Perempuan", "Fakultas Teknik",
                     "Teknik Informatika", "Universitas Pendidikan Indonesia", "siti@ui.ac.id")

    # Membuat objek dosen
    dosen1 = Dosen("001", "555444333", "Dean", "Laki-laki", "Fakultas Teknik", "Teknik Informatika",
                   "S2 Teknik Informatika", "Pengembangan Perangkat Lunak", "Universitas Pendidikan Indonesia", "Dean@ui.ac.id")
    dosen2 = Dosen("002", "222333444", "Sheeran", "Perempuan", "Fakultas Teknik", "Teknik Informatika",
                   "S3 Teknik Informatika", "Data Mining", "Universitas Pendidikan Indonesia", "Sheeran@ui.ac.id")

    # Membuat objek course
    course1 = Course("Pemrograman Berorientasi Objek")
    course2 = Course("Basis Data")

    # Menambahkan course ke objek Mahasiswa
    mhs1.tambah_course(course1)
    mhs1.tambah_course(course2)

    # Menambahkan course ke objek Dosen
    dosen1.tambah_course(course1)
    dosen2.tambah_course(course2)

    # Membuat objek program studi
    prodi1 = ProgramStudi("Teknik Informatika", "TI", [course1, course2])

    # Menambahkan course ke objek program studi
    prodi1.tambah_course(course1)
    prodi1.tambah_course(course2)

    # Menampilkan daftar NIM mahasiswa
    daftar_nim = [mhs1.getNIM(), mhs2.getNIM()]
    print("\nDaftar NIM Mahasiswa:")
    for nim in daftar_nim:
        print(f"- {nim}")

    input_nim = input("\nMasukkan NIM mahasiswa: ")
    if input_nim == mhs1.getNIM():
        mhs = mhs1
    elif input_nim == mhs2.getNIM():
        mhs = mhs2
    else:
        print("\nNIM yang dimasukkan tidak ditemukan.")
        mhs = None

    if mhs is not None:
        print(f"\nIdentitas Mahasiswa {mhs.getNama()}")
        print(f"NIK: {mhs.getNIK()}")
        print(f"NIM: {mhs.getNIM()}")
        print(f"Jenis Kelamin: {mhs.getJenisKelamin()}")
        print(f"Fakultas: {mhs.getFakultas()}")
        print(f"Program Studi: {mhs.getProdi()}")
        print(f"Asal Universitas: {mhs.getAsalUniversitas()}")
        print(f"Email Edu: {mhs.getEmailEdu()}")
        print("Daftar Course:")
        courses = mhs.get_courses()
        if len(courses) == 0:
            print("Tidak ada course yang diambil.")
        else:
            for course in courses:
                print(f"- {course.getNamaMatakuliah()}")

    # Menampilkan daftar NIP dosen
    daftar_dosen = [dosen1.getNIP(), dosen2.getNIP()]
    print("\nDaftar NIP dosen:")
    for nip in daftar_dosen:
        print(f"- {nip}")

    daftar_dosen = [dosen1, dosen2]
    dosen = None

    input_nip = input("\nMasukkan NIP dosen: ")
    for d in daftar_dosen:
        if input_nip == d.getNIP():
            dosen = d
            break

    if dosen is not None:
        print(f"\nIdentitas Dosen {dosen.getNama()}")
        print(f"NIK: {dosen.getNIK()}")
        print(f"NIP: {dosen.getNIP()}")
        print(f"Jenis Kelamin: {dosen.getJenisKelamin()}")
        print(f"Fakultas: {dosen.getFakultas()}")
        print(f"Program Studi: {dosen.getProdi()}")
        print(f"Pendidikan Terakhir: {dosen.getPendidikanTerakhir()}")
        print(f"Keahlian: {dosen.getKeahlian()}")
        print("Daftar Course:")
        courses = dosen.get_courses()
        if len(courses) == 0:
            print("Tidak mengajar course.")
        else:
            for course in courses:
                print(f"- {course.getNamaMatakuliah()}")

    if mhs is None and dosen is None:
        print("\nNIM/NIP yang dimasukkan tidak ditemukan.")
