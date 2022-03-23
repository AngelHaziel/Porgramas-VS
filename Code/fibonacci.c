#include <stdlib.h>
#include <stdio.h>

void fibonacci(int numero);

int main(){
    int numero;
    printf("Programa que calcula la serie Fibonacci...\n");
    printf("Bienvenido...\n");
    printf("Hasta que numero desea llegar en la serie: ");
    scanf("%d",&numero);
    if(numero >= 1){
        fibonacci(numero);
    } 
    else{
        printf("Dato invalido");
        } 
    system("pause");
    return 0;
}

void fibonacci(int numero){
    int x=0,y=1,z;
    
    if(numero == 1){
        printf("Los numeros de la serie son:\n0");
    }else if (numero == 2)
    {
        printf("Los numeros de la serie son:\n0  1 ");
    }else{
        printf("Los numeros de la serie son:\n0  1 ");
        for (int i = 1; i <= numero; i++)
        {
        z=x+y;
        printf(" %d ",z);
        x=y;
        y=z;
        }
    }   
    printf("\n");
};
