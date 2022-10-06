
#include<stdio.h>
//#include<stdlib.h> //libreria funciones de pausa en windows
#include<unistd.h>

//Variables Globales

int n,i;
float prom,cal,calMay,calMen;
void main(){
    //obs: se escribe 5 calificaciones
    printf("Ingresa el numero de calificaciones del alumno: ");
    scanf("%d",&n);
    //Ejemplo:nota 1=10 2=8 3=5 4=9 5=3
    for(i=0;i<n;i++){
        printf("\nIngresa la calificacion %d: ",i+1);
        scanf("%f", &cal);
    //Se Asigna calificacion a variables
        prom=prom+cal;
        if( i == 0){calMay=cal;calMen=cal;}
        if (cal > calMay)
            calMay = cal;
        if (cal < calMen)
            calMen = cal;     
    } //for
    prom = prom /n;
    printf("Promedio: %.2f\n",prom);
    printf("calificacion mayor: %.2f\n",calMay);
    printf("calificacion menor: %.2f\n",calMen);

//System ("pause"); Instruccion para windows
    sleep(3);

//return 0; otra opcion para cierre del programa
}