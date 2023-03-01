# import class parent
from Human import Human
from SivitasAkademik import SivitasAkademik


class Dosen(Human, SivitasAkademik):
    def __init__(self, NIP, NIK, nama, jenis_kelamin, fakultas, prodi, pend_terakhir, keahlian, asal_universitas, email_edu):
        # menginisialisasi objek Dosen dengan memanggil constructor dari Human dan SivitasAkademik
        super().__init__(NIK, nama, jenis_kelamin)
        SivitasAkademik.__init__(self, asal_universitas, email_edu)
        self._NIP = NIP
        self._fakultas = fakultas
        self._prodi = prodi
        self._pend_terakhir = pend_terakhir
        self._keahlian = keahlian
        self._courses = []

    # get dan set
    def getNIP(self):
        return self._NIP

    def setNIP(self, NIP):
        self._NIP = NIP

    def getFakultas(self):
        return self._fakultas

    def setFakultas(self, fakultas):
        self._fakultas = fakultas

    def getProdi(self):
        return self._prodi

    def setProdi(self, prodi):
        self._prodi = prodi

    def getPendidikanTerakhir(self):
        return self._pend_terakhir

    def setPendidikanTerakhir(self, pend_terakhir):
        self._pend_terakhir = pend_terakhir

    def getKeahlian(self):
        return self._keahlian

    def setKeahlian(self, keahlian):
        self._keahlian = keahlian

    def get_courses(self):
        return self._courses
    # menambahkan course pada list _courses

    def tambah_course(self, course):
        self._courses.append(course)
