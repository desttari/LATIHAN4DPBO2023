class SivitasAkademik:
    # contructor, Inisialisasi atribut
    def __init__(self, asal_universitas, email_edu):
        self._asal_universitas = asal_universitas
        self._email_edu = email_edu

    # setter dan getter
    def getAsalUniversitas(self):
        return self._asal_universitas

    def setAsalUniversitas(self, asal_universitas):
        self._asal_universitas = asal_universitas

    def getEmailEdu(self):
        return self._email_edu

    def setEmailEdu(self, email_edu):
        self._email_edu = email_edu
