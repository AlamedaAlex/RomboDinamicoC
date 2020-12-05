#include <stdio.h>
void hola(int x){
    //variables de movimiento de matriz 
    int fila,columna,M,M1;
    //contadores
    int i,j,k;
    fila=x;
    columna=x;
    M=(x%2)+(x/2);
    M1=M;
    printf("%d\n",fila);printf("%d\n",columna);printf("%d\n",M);printf("%d\n",M1);
    for(i=1;i<=fila;i++){
        for(j=1;j<=columna;j++){
            if(j==M&&(x%2)==1){
                printf("*");
                M1++;
            }else if(j==M && (x%2)==0){
                printf("**");
                M1=+2;
            }else{
                printf("-");
            }
            /*for(k=M;k<=M1 && M1<= x;k++){
                printf("*");
            }*/
        }
        printf("\n");
    }
}