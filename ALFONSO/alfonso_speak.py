
import os
import subprocess
from subprocess import DEVNULL, STDOUT, check_call

def alfonsoName():
    subprocess.Popen("espeak" + ''' "buffer buffer buffer,  my name is, aalllfonso"''', shell=True, stdout=DEVNULL, stderr=STDOUT)

def alfonsoSay(st):
    subprocess.Popen('espeak \"' + st + '\"', shell=True, stdout=DEVNULL, stderr=STDOUT)
    