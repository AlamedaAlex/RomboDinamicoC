#include <stdio.h>
#include<unistd.h>

void hola(int x){
    //variables de movimiento de matriz 
    int fila,columna,M,M1;
    //contadores
    int i,j,k;
    fila=x;
    columna=x;
    M=(x%2)+(x/2);
    M1=M;
    //printf("%d\n",fila);printf("%d\n",columna);printf("%d\n",M);printf("%d\n",M1);
    for(i=1;i<=(fila/2);i++){
        for(j=1;j<=columna;j++){
            if(j==M&&(x%2)==1){
                printf("*");
                fflush( stdout );
                sleep(1); 
                M1++;
            }else if(j==M && (x%2)==0){
                printf("**");
                fflush( stdout );
                sleep(1); 
                M1=+2;
            }else{
                for(k=M;k<M1 && M1<=x;k++){
                    printf("*");
                    fflush( stdout );
                    sleep(1);                     
                }
            }
        }
        printf("\n");
    }
}