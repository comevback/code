import  speech_recognition as sr
r = sr.Recognizer()
sou = sr.AudioFile('reco.wav')
with sou as source:
	audio = r.record(source)
r.recognize_google(audio,show_all=True)
