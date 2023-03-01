class Course:
    # constructor
    def __init__(self, nama_matakuliah):
        self._nama_matakuliah = nama_matakuliah

    # getter dan setter
    def getNamaMatakuliah(self):
        return self._nama_matakuliah

    def setNamaMatakuliah(self, nama_matakuliah):
        self._nama_matakuliah = nama_matakuliah
