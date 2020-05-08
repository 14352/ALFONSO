import speech_recognition as sr
import alfonso_wordlists
r = sr.Recognizer()
def getGoogleCapture():
    with sr.Microphone() as source:
        print("listening")
        r.adjust_for_ambient_noise(source)
        audio = r.listen(source)
        capture = r.recognize_google(audio)
        alfonso = "Alfonso"
        print(capture)
        print(capture[(capture.find(alfonso))+8:])
    return capture
def getVoiceCommand():
    with sr.Microphone() as source:
        r.adjust_for_ambient_noise(source)
        print("listening")
        audio = r.listen(source)
        capture = r.recognize_google(audio)
        Alfonso = "Alfonso"
        print(capture)
    return (capture[(capture.find(Alfonso))+8:])
        