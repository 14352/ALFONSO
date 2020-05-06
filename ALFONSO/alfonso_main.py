#!/usr/bin/env python3

# NOTE: this example requires PyAudio because it uses the Microphone class

# ALFONSO was born at 11:51 5/1/2020

import speech_recognition as sr
import serial, time
import alfonso_wordlists
import alfonso_serial_communication
import alfonso_get_capture
# obtain audio from the microphone
while(1):
    #ser = serial.Serial('/dev/ttyACM0',19200)
    # recognize speech using Google Speech Recognition
    try:
        # for testing purposes, we're just using the default API key
        # to use another API key, use `r.recognize_google(audio, key="GOOGLE_SPEECH_RECOGNITION_API_KEY")`
        # instead of `r.recognize_google(audio)`
        goARR = alfonso_get_capture.getVoiceCommand()
            
        if goARR in alfonso_wordlists.DOOROPEN:
            alfonso_serial_communication.ROOM_ARD_COM_OPENDOOR()
                
        elif goARR in alfonso_wordlists.DOORCLOSE:
            alfonso_serial_communication.ROOM_ARD_COM_CLOSEDOOR()
        elif goARR in alfonso_wordlists.FANON:
            alfonso_serial_communication.ROOM_ARD_COM_FANON()
        elif goARR in alfonso_wordlists.FANOFF:
            alfonso_serial_communication.ROOM_ARD_COM_FANOFF() 
        else:
            print("KEYWORD recived no commands registered for:", goARR)
            pass
                
    except sr.UnknownValueError:
        print("whatever that was I didnt get it")
    except sr.RequestError as e:
        print("splat; {0}".format(e))


