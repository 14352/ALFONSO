import serial, time
def ROOM_ARD_COM_OPENDOOR():
    ser = serial.Serial('/dev/ttyACM0',9600)
    print("1")
    ser.write("a open door".encode())
    print("2")
    time.sleep(1)
    ser.close
def ROOM_ARD_COM_CLOSEDOOR():
    ser = serial.Serial('/dev/ttyACM0',9600)
    print("1")
    ser.write("a close door".encode())
    print("2")
    time.sleep(1)
    ser.close
def ROOM_ARD_COM_FANON():
    ser = serial.Serial('/dev/ttyACM0',9600)
    print("1")
    ser.write("a fan on".encode())
    print("2")
    time.sleep(1)
    ser.close
def ROOM_ARD_COM_FANOFF():
    ser = serial.Serial('/dev/ttyACM0',9600)
    print("1")
    ser.write("a fan off".encode())
    print("2")
    time.sleep(1)
    ser.close