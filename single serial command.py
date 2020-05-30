import serial, time
def ROOM_ARD_COM_OPENDOOR():
    ser = serial.Serial('/dev/ttyACM0',9600)
    print("1")
    ser.write("a leds red" .encode())
    print("2")
    time.sleep(1)
    ser.close
ROOM_ARD_COM_OPENDOOR()