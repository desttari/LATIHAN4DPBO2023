class Human:
    # constructor,Inisialisasi atribut NIK, nama, dan jenis kelamin
    def __init__(self, NIK, nama, jenis_kelamin):
        self._NIK = int(NIK)
        self._nama = nama
        self._jenis_kelamin = jenis_kelamin

    # setter dan getter
    def getNIK(self):
        return self._NIK

    def setNIK(self, NIK):
        self._NIK = NIK

    def getNama(self):
        return self._nama

    def setNama(self, nama):
        self._nama = nama

    def getJenisKelamin(self):
        return self._jenis_kelamin

    def setJenisKelamin(self, jenis_kelamin):
        self._jenis_kelamin = jenis_kelamin
