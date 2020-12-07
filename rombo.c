#include <stdio.h>
#include<unistd.h>

void hola(int x){
    //variables de movimiento de matriz 
    int fila,columna,M,M1,izq;
    //contadores
    int i,j,k;
    izq=0;
    fila=x;
    columna=x;
    M=(x%2)+(x/2);
    M1=M;
    //printf("%d\n",fila);printf("%d\n",columna);printf("%d\n",M);printf("%d\n",M1);
    for(i=1;i<=(fila/2);i++){
        //printf("fila: %d",i);
        for(j=1;j<=columna;j++){
            //printf("\n\tM1/C: %d, %d",M1,j);
            if(j==M&&(x%2)==1){
                printf("*");
                M1++;
                izq++;
            }else if(j==M && (x%2)==0){
                printf("**");
                M1=+2;
                izq++;
            }else if(j>=M1 && izq<i){
                printf("*");
                izq++;
            }else{
                printf("-");
            }
            //sleep(1);
        }
        M1=M;
        izq=0;
        printf("\n");
    }
}