import  speech_recognition as sr
r = sr.Recognizer()
sou = sr.AudioFile('hello.wav')
with sou as source:
	audio = r.record(source)
print(r.recognize_google(audio))
