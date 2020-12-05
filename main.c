#include <stdlib.h>
#include<time.h>
#include <stdio.h>
#include "rombo.c"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_RESET   "\x1b[0m"
int main(){
    int tamano=0,c;
    
    //do{
        printf("Ingrese el un valor (3-n) ");
        scanf("%d",&tamano);
        if(tamano>=3){
            hola(tamano);
        }else
        {
            printf(ANSI_COLOR_RED "\n\n\tNumero no valido!!! \n\n\t----Ingrese otro numero----\n\n" ANSI_COLOR_RESET);
            fflush( stdin );
            getchar();
            while (getchar() != '\n' );  
            system("clear");
        }
    //}while(tamano<3);
    return 0;
}