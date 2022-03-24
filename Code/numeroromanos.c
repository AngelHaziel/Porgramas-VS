#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int conversion(int numero,char cadena[50]);
int comprobar(int numero, char cadena[50]);

int main(){
    char numeroromano[50];
    int longitud,resultado,comp,yon=1;
    do
    {
    system("cls");
    printf("Programa Conversor de Numero Romanos a Arabigos\n");
    printf("Bienvenidos...\n");
    printf("Ingrese el numero en romano: ");
    scanf("%s",numeroromano);

    longitud=strlen(numeroromano);
    comp=comprobar(longitud,numeroromano);
    if(comp == longitud){
        resultado = conversion(longitud,numeroromano);
        printf("%s en numeros arabios es %d\n",numeroromano,resultado);
        system("pause");
        system("cls");
        }
    else{
        printf("La cadena que ingresaste no es valida...\n");
        system("pause");
        system("cls");
    }
    printf("Desea ingresar otro numero Yes=1/No=2: ");
    scanf("%d",&yon);   
    } while (yon == 1);
    system("pause");
    return 0;
}
int comprobar(int numero, char cadena[50]){
    int comp=0;
    for(int x=0;x<numero;x++){
        if(cadena[x] == 'I' || cadena[x] == 'V' || cadena[x] == 'X' || cadena[x] == 'L' || cadena[x] == 'C' || cadena[x] == 'D' || cadena[x] == 'M'){
            comp=comp+1;
        }
        if(cadena[x]==cadena[x-1]&&cadena[x]==cadena[x-2]&&cadena[x]==cadena[x-3]){
            comp=0;
        }
    }
    return comp;
};
int conversion(int numero,char cadena[50]){
    int resultado=0;
    for(int x=0;x<numero;x++){
        switch(cadena[x]){
            case 'I':
            resultado=resultado+1;
            break;
            case 'V':
            if(cadena[x-1]=='I'){
                resultado=resultado+3;
            }else resultado=resultado+5;
            break;
            case 'X':
            if(cadena[x-1]=='I'){
                resultado=resultado+8;
            }else resultado=resultado+10;
            break; 
            case 'L':
            if(cadena[x-1]=='X'){
                resultado=resultado+30;
            }else resultado=resultado+50;
            break; 
            case 'C':
            if(cadena[x-1]=='X'){
                resultado=resultado+80;
            }else resultado=resultado+100;
            break; 
            case 'D':
            if(cadena[x-1]=='C'){
                resultado=resultado+300;
            }else resultado=resultado+500;
            break; 
            case 'M':
            if(cadena[x-1]=='C'){
                resultado=resultado+800;
            }else resultado=resultado+1000;
            break; 
        }
    }
    return resultado;
};