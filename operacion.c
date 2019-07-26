#include <stdio.h>
#include <stdlib.h>
#include "common.h"
#include "common_threads.h"
#include "mycommon.h"

float v;
puerta(puerta);

void *operador1(void *arg) {
    float y = 350;
    float z = 25;
    cerrar_puerta(puerta);
	v=(z/y);
    printf("z/y= %f\n",v);
    abrir_puerta(puerta);
    return NULL;
}

void *operador2(void *arg) {
    sleep(2);
    float x = 1250;
    cerrar_puerta(puerta);
	v=v*x;
    printf("(z/y)*x= %f\n",v);
    abrir_puerta(puerta);
    return NULL;
}

int main(int argc, char *argv[]) {

    crear_puerta(puerta); 
    pthread_t p1, p2;
    pthread_create(&p1, NULL, operador1, NULL); 
    pthread_create(&p2, NULL, operador2, NULL);
    pthread_join(p1, NULL);
    pthread_join(p2, NULL);
    destruir_puerta(puerta);
    printf("Valor final:   : %f\n", v);
    return 0;
}
