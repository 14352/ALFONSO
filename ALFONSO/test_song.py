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

# Shows playing devices
res = sp.devices()
pprint(res)

# Change track
sp.start_playback(uris=['spotify:track:6gdLoMygLsgktydTQ71b15'], device_id='98bb0735e28656bac098d927d410c3138a4b5bca')

# Change volume
while(1):
    sp.volume(100)
    sleep(3)
    sp.volume(20)
    sleep(3)
