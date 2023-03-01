# import class parent
from Human import Human
from SivitasAkademik import SivitasAkademik


class Mahasiswa(Human, SivitasAkademik):
    # constructor
    def __init__(self, NIM, NIK, nama, jenis_kelamin, fakultas, prodi, asal_universitas, email_edu):
        # menginisialisasi objek Mahasiswa dengan memanggil constructor dari Human dan SivitasAkademik
        super().__init__(NIK, nama, jenis_kelamin)
        SivitasAkademik.__init__(self, asal_universitas, email_edu)
        self._NIM = NIM
        self._fakultas = fakultas
        self._prodi = prodi
        self._courses = []

    # method get dan set
    def getNIM(self):
        return self._NIM

    def setNIM(self, NIM):
        self._NIM = NIM

    def getFakultas(self):
        return self._fakultas

    def setFakultas(self, fakultas):
        self._fakultas = fakultas

    def getProdi(self):
        return self._prodi

    def setProdi(self, prodi):
        self._prodi = prodi

    def get_courses(self):
        return self._courses

    # menambah dan menghapus courses yang diambil oleh mahasiswa
    def tambah_course(self, course):
        self._courses.append(course)

    def hapus_course(self, course):
        self._courses.remove(course)
