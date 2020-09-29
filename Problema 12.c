#include <stdio.h>

int main(){

    int NUM, RES=0;

        printf("\n\tIngrese un numero DECIMAL positivo: ");
            scanf("%d", &NUM);


            while( NUM >= 1 ){
                     RES = NUM / 2;
                    if(NUM % 2 == 0){
                        printf("\n\n\t\t0");
                    }
                    else{printf("\n\n\t\t1");}
            NUM = RES;
            }

        printf("\n\n\tLeer o escribir de abajo hacia arriba\n\n");

return 0;
}
