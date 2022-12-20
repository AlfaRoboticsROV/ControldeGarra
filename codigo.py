import serial

led=0
mot=0

serialArduino = serial.Serial("COM3",9600)
print('Bienvenido a Alfa robotics')


while True:
    
    opcion=input('Seleccione X para cerrar o Y para continuar...\n')
    if opcion=='X':
        print('Saliendo del sistema')
        break
    elif opcion=='Y':
        mot = int(input("Introduce un valor entre 1 y 180: "))
        print("Se envia el valor de {} para el motor...\n".format(mot))
        cad =str(mot)
        serialArduino.write(cad.encode('ascii'))
    else:
        print('Opcion no valida')




