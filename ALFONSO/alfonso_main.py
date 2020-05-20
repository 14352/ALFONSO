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
import alfonso_command_search
import alfonso_run_command
# obtain audio from the microphone
alfonso_spotify.reclaimSpotify()
alfonso_serial_communication.ROOM_ARD_COM_CHECK()
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
            commandSearchResults = alfonso_command_search.search_commands(goARR)
            
            if commandSearchResults == "DOOROPEN":
                alfonso_serial_communication.ROOM_ARD_COM_OPENDOOR()
                alfonso_speak.alfonsoSay("opening, the door")
                    
            elif commandSearchResults == "DOORCLOSE":
                alfonso_serial_communication.ROOM_ARD_COM_CLOSEDOOR()
                alfonso_speak.alfonsoSay("closing, the door")
                
            elif commandSearchResults == "FANON":
                alfonso_serial_communication.ROOM_ARD_COM_FANON()
                alfonso_speak.alfonsoSay("turning the fan, on")
                
            elif commandSearchResults == "FANOFF":
                alfonso_serial_communication.ROOM_ARD_COM_FANOFF()
                alfonso_speak.alfonsoSay("turning the fan, off")
                
            elif commandSearchResults == "PLAYMUSIC":
                alfonso_spotify.playMusic()
                alfonso_speak.alfonsoSay("buffer,buffer,buffer, it is that time of day already?")
                
            elif commandSearchResults == "NEXTSONG":
                alfonso_spotify.nextSong()
                
            elif commandSearchResults == "UPVOLUME":
                alfonso_spotify.volUp()
                
            elif commandSearchResults == "DOWNVOLUME":
                alfonso_spotify.volDown()
                
            elif commandSearchResults == "BLINDSUP":
                alfonso_serial_communication.ROOM_ARD_COM_BLINDSUP()
                
            elif commandSearchResults == "BLINDSDOWN":
                alfonso_serial_communication.ROOM_ARD_COM_BLINDSDOWN()
                alfonso_speak.alfonsoSay("buffer. buffer, buffer, ooooh you must be naked then?")
            elif commandSearchResults == "NETFLIXON":
                alfonso_run_command.start_netflix()
                alfonso_speak.alfonsoSay("buffer. buffer, buffer, some tiger king?")
            else:
                print("KEYWORD recived no commands registered for:", goARR)
                alfonso_speak.alfonsoSay("KEYWORD recived no commands registered for"+ goARR)
                pass
#             try:
#                 alfonso_spotify.concurVol()
#             except:
#                 alfonso_speak.alfonsoSay("spotify not configured: attempting token reconfiguration")
#                 alfonso_spotify.reclaimSpotify()
            
                    
        except sr.UnknownValueError:
            print("whatever that was I didnt get it")
            pass
        except sr.RequestError as e:
            print("splat; {0}".format(e))
    #else:
        #pass



