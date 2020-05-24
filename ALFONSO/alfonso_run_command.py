import os
import subprocess
from subprocess import DEVNULL, STDOUT, check_call

def start_netflix():
    subprocess.Popen('''chromium-browser %U --user-agent="Mozilla/5.0 (X11; CrOS armv7l 11895.95.0) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/74.0.3729.125 Safari/537.36" -start-maximized -open https://www.netflix.com''', shell=True, stdout=DEVNULL, stderr=STDOUT)

def start_raspotify():
    subprocess.Popen('''sudo service raspotify start''', shell=True, stdout=DEVNULL, stderr=STDOUT)
def open_land_ownership_map():
    subprocess.Popen('''chromium-browser %U --user-agent="Mozilla/5.0 (X11; CrOS armv7l 11895.95.0) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/74.0.3729.125 Safari/537.36" -start-maximized -open https://www.acrevalue.com/plat-map/KS/?lat=38.920555&lng=-94.866765&zoom=15 ''', shell=True, stdout=DEVNULL, stderr=STDOUT)

def start_disney_plus():
    subprocess.Popen('''chromium-browser %U --user-agent="Mozilla/5.0 (X11; CrOS armv7l 11895.95.0) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/74.0.3729.125 Safari/537.36" -start-maximized -open https://disneyplus.com/home''', shell=True, stdout=DEVNULL, stderr=STDOUT)