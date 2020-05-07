
import os

def alfonsoName():
    os.system("espeak" + ''' "buffer buffer buffer,  my name is, aalllfonso"''')
def alfonsoSay(st):
    os.system('espeak \"' + st + '\"')