import speech_recognition as sr
r = sr.Recognizer()
def getGoogleCapture():
    with sr.Microphone() as source:
        print("listening")
        audio = r.listen(source)
        capture = r.recognize_google(audio)
        alfonso = "Alfonso"
        print(capture)
        print(capture[(capture.find(alfonso))+8:])
    return capture
def getVoiceCommand():
    with sr.Microphone() as source:
        print("listening")
        audio = r.listen(source)
        capture = r.recognize_google(audio)
        Alfonso = "Alfonso"
    return (capture[(capture.find(Alfonso))+8:])
        