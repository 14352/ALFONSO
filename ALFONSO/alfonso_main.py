#!/usr/bin/env python3

# NOTE: this example requires PyAudio because it uses the Microphone class

# ALFONSO was born at 11:51 5/1/2020
# ALFONSO learned to speak at 11:53 5/6/2020
import speech_recognition as sr
import serial, time
import alfonso_wordlists
import alfonso_serial_communication
import alfonso_get_capture
import alfonso_spotify
import alfonso_button
import alfonso_speak
# obtain audio from the microphone
alfonso_spotify.reclaimSpotify()
while(1):
    #if(alfonso_button.button1()):
        #alfonso_spotify.mute()
        
        #ser = serial.Serial('/dev/ttyACM0',19200)
        # recognize speech using Google Speech Recognition
        try:
            # for testing purposes, we're just using the default API key
            # to use another API key, use `r.recognize_google(audio, key="GOOGLE_SPEECH_RECOGNITION_API_KEY")`
            # instead of `r.recognize_google(audio)`
            goARR = alfonso_get_capture.getVoiceCommand()
                
            if goARR in alfonso_wordlists.DOOROPEN:
                alfonso_serial_communication.ROOM_ARD_COM_OPENDOOR()
                alfonso_speak.alfonsoSay("opening, the door")
                    
            elif goARR in alfonso_wordlists.DOORCLOSE:
                alfonso_serial_communication.ROOM_ARD_COM_CLOSEDOOR()
                alfonso_speak.alfonsoSay("closing, the door")
                
            elif goARR in alfonso_wordlists.FANON:
                alfonso_serial_communication.ROOM_ARD_COM_FANON()
                alfonso_speak.alfonsoSay("turning the fan, on")
                
            elif goARR in alfonso_wordlists.FANOFF:
                alfonso_serial_communication.ROOM_ARD_COM_FANOFF()
                alfonso_speak.alfonsoSay("turning the fan, off")
                
            elif goARR in alfonso_wordlists.PLAYMUSIC:
                alfonso_spotify.playMusic()
                alfonso_speak.alfonsoSay("it is that time of day already?")
                
            elif goARR in alfonso_wordlists.NEXTSONG:
                alfonso_spotify.nextSong()
                
            elif goARR in alfonso_wordlists.UPVOLUME:
                alfonso_spotify.volUp()
                
            elif goARR in alfonso_wordlists.DOWNVOLUME:
                alfonso_spotify.volDown()
                
            else:
                print("KEYWORD recived no commands registered for:", goARR)
                alfonso_speak.alfonsoSay("KEYWORD recived no commands registered for"+ goARR)
                pass
            try:
                alfonso_spotify.concurVol()
            except:
                alfonso_speak.alfonsoSay("spotify not configured: attempting token reconfiguration")
                alfonso_spotify.reclaimSpotify()
            
                    
        except sr.UnknownValueError:
            print("whatever that was I didnt get it")
            pass
        except sr.RequestError as e:
            print("splat; {0}".format(e))
    #else:
        #pass



