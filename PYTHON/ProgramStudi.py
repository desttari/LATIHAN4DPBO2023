# # import class parent
from Course import Course


class ProgramStudi:
    # constructor
    def __init__(self, nama_prodi, kode, courses=None):
        self._nama_prodi = nama_prodi
        self._kode = kode
        # inisialisais array untuk course
        if courses is None:
            self._courses = []
        else:
            self._courses = courses

    # getter dan setter
    def getNamaProdi(self):
        return self._nama_prodi

    def setNamaProdi(self, nama_prodi):
        self._nama_prodi = nama_prodi

    def getKode(self):
        return self._kode

    def setKode(self, kode):
        self._kode = kode

    def get_courses(self):
        return self._courses

    # menambah dan menghapus courses yang diambil oleh programstudi
    def tambah_course(self, course):
        self._courses.append(course)

    def hapus_course(self, course):
        self._courses.remove(course)
