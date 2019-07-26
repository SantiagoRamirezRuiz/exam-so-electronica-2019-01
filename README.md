# Parcial 1

Santiago Ramirez 1831310

## Pregunta 1
Archivo: [threads.c](threads.c)
	 [threads1.c](threads1.c)

A.
x = 10000000
tiempos:
1.804
1.775
1.874

Promedio: 1.817

B. 
Segundo escenario
x = 10000000
tiempos:
1.820
1.789
1.852

Promedio: 1.821

En el primer escenario el tiempo es menor debido a que el proceso de abrir y cerrar la puerta esta por fuera del ciclo for, por lo que este es practicamente un contador, simplemente sumando numeros: 
1,2,3,4,5,6...
mientras que en el segundo escenario, dentro del ciclo for se esta realizando el proceso de cerrar y abrir la puerta:
INICIO DEL CICLO FOR
Cerrar puerta
contador+1
Abrir puerta
VOLVER AL INICIO DEL CICLO (tantas veces como se deba repetir el ciclo for)

## Pregunta 2
Archivo: [operacion.c](operacion.c)
En este programa se crearon 2 hilos, en el primero hilo llamado operador1 se realizo la division y se asigno a la variable global v y en el operador2 se realizo la multiplicacion de v por x y se asigno a v, para concluir se realizo la impresion del valor de la variable.

## Pregunta 3
Archivo: [wait.c](wait.c)
En este se creo un programa con la intencion de que el hijo esperara al padre, cosa que se intento con la funcion wait(), pero no dio los resultados esperados, pues una ves se probo con un sleep() se demostro que no esperaba al padre.

## Pregunta 4
1. La utilización de la CPU será del 100%. El sistema operativo hará que uno de los dos empiece su ejecución hasta que termine, para después darle paso al siguiente proceso.

2. El tiempo que tardan los procesos en terminarse es de 10 tics.

## Pregunta 5
# HAKUNA MATATA :)
