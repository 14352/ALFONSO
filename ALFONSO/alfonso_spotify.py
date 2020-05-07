import spotipy
from spotipy.oauth2 import SpotifyOAuth
from pprint import pprint
import spotipy.util as util
from time import sleep
import os
import sys
os.environ["SPOTIPY_CLIENT_ID"] = "646179f00e9d444d8c2f42d978c4601c"
os.environ["SPOTIPY_CLIENT_SECRET"] = "6031ecf4a88d462e9ddbb69338640ba3"
os.environ["SPOTIPY_REDIRECT_URI"] = "http://localhost:8888/callback/"
username = "redlavalamp1"
scope = "user-read-playback-state,user-modify-playback-state"
token = util.prompt_for_user_token(username, scope)
sp = spotipy.Spotify(auth=token)
raspberrypi = '98bb0735e28656bac098d927d410c3138a4b5bca'
global music_vol
music_vol = 0
# Shows playing devices
#res = sp.devices()
#pprint(res)

# Change track
def playMusic(): #shuffle boolean
    global music_vol
    sp.start_playback(context_uri="spotify:playlist:1ILlfhipr1ApFelcJY4dcO", device_id=raspberrypi)
    sp.shuffle(True, device_id=raspberrypi)
    music_vol = 100
    setVolume(music_vol)
    
def nextSong():
    sp.next_track(device_id=raspberrypi)
    
def setVolume(vol): #change volume vol is volume
    print("volume set:", vol)
    sp.volume(vol)
    
def volUp(): #change volume vol is volume
    global music_vol
    music_vol = int(min(music_vol+(music_vol*.50), 100))
    print("volume set:", music_vol)
    sp.volume(music_vol)
    
def volDown(): #change volume vol is volume
    global music_vol
    music_vol = int(max(min(music_vol-(music_vol*.50), 100), 0))
    print("volume set:", music_vol)
    sp.volume(music_vol)
def getMusicVol():
    global music_vol
    return music_vol
def mute():
    sp.volume(0)
def concurVol():
    sp.volume(music_vol)
def reclaimSpotify(): #shuffle boolean
    sp.start_playback(context_uri="spotify:playlist:1ILlfhipr1ApFelcJY4dcO", device_id=raspberrypi)
    sp.shuffle(True, device_id=raspberrypi)
    setVolume(0)
# Change volume
