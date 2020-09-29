#include <stdio.h>

int main(){

    int VALOR, CONT=0;

     while(VALOR != 235){

            printf("\n\tIngresar VALOR: ");
            scanf("%d", &VALOR);

        if(VALOR == 23){
            CONT++;
        }
     }

     printf("\n\tEl valor 23 se ingres %d cantidad de veces", CONT);

return 0;
}
