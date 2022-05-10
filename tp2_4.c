#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

struct compu {
int velocidad;//entre 1 y 3 Gherz
int anio;//entre 2015 y 2022
int cantidad;//entre 1 y 8
char *tipo_cpu; //valores del arreglo tipos
} typedef compu;

//Declaracion de funciones
void presentar(compu pc);
void mayorVelocidad(compu pc[]);
void masVieja(compu pc[]);

int main(){

    srand(time(NULL));
    char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu pc[5];
    int aleatorio_char;
        for (int i = 0; i < 5; i++)
    {
        printf("PC numero %d:\n", i);
        do
        {
            printf("Ingrese la velocidad en gherz (entre 1 y 3): ");
            scanf("%d", &pc[i].velocidad);
        } while (pc[i].velocidad < 1 || pc[i].velocidad > 3);
        do
        {
            printf("Ingrese el a%co de fabricaci%cn (entre 2015 y 2022): ", 164, 162);
            scanf("%d", &pc[i].anio);
        } while (pc[i].anio < 2015 || pc[i].anio > 2022);
        do
        {
            printf("Ingrese la cantidad de nucleos (entre 1 y 8): ");
            scanf("%d", &pc[i].cantidad);
        } while (pc[i].cantidad < 1 || pc[i].cantidad > 8);
        do
        {
            printf("Ingrese el tipo de CPU (1= Intel, 2= AMD, 3=Celeron, 4=Athlon, 5=Core, 6=Pentium): ");
            scanf("%d", &aleatorio_char);
            fflush(stdin);
            aleatorio_char--;
        } while (aleatorio_char < 0 || aleatorio_char > 5);
        // strcpy(pc[i].tipo_cpu, tipos[aleatorio_char]);  por alguna razon esta funcion no deja avanzar el programa
        presentar(pc[i]);
    }
    mayorVelocidad(pc);
    masVieja(pc);
    
    return 0;
}

void presentar(compu pc){
    printf("\nNueva PC:\n\n");
    printf("Velocidad: %d\n", pc.velocidad);
    printf("a%co de fabricaci%cn: %d\n",164, 162, pc.anio);
    printf("Cantidad de nucleos: %d\n", pc.cantidad);
    printf("Tipo de CPU: ");
    puts(pc.tipo_cpu);
}

void mayorVelocidad(compu pc[]){
    compu masRapida;
    masRapida.velocidad=0;
    for (int i = 0; i < 5; i++)
    {
        if (pc->velocidad > masRapida.velocidad)
        {
            masRapida = *pc;
        }
        pc++;
    }
    printf("\n\nLa pc mas rapida es:");
    presentar(masRapida);
}

void masVieja(compu pc[]){
    compu masVieja;
    masVieja.anio=2023;
    for (int i = 0; i < 5; i++)
    {
        if (pc->anio < masVieja.anio)
        {
            masVieja = *pc;
        }
        pc++;
    }
    printf("La pc mas vieja es:");
    presentar(masVieja);
}