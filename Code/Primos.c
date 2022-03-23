#include <stdio.h>
#include <math.h>
#include <stdlib.h>
//Alumno: Angel Haziel Hernández Nachez 2doP
void primo (int);

int main(){
    int numeroN;
    printf("Calculadora de numero primos hasta un numero N\n");
    printf("Bienvenido...\n");
    printf("Ingrese el numero hasta el cual revisara el programa: ");
    scanf("%d",&numeroN);
    primo(numeroN);
    printf("\n");
    system("pause");
    return 0;
}

void primo (int numero){
    int primo,cont=0; 
    printf("\n\nLos numeros primos hasta %d son:\n",numero);
    for(int x=2;x<=numero;x++){
        for(int d = 1; d<=x;d++){
            if( x % d == 0)cont++;  
            }
        if (cont <= 2 && x != 4 )printf(" %d ",x); 
        cont = 0;  
    }   
}