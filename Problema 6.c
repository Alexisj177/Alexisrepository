#include <stdio.h>

int main(){

    int NUM, VAL, SUMA=0;

    printf("\n\tIngresar un numero entero positivo: ");
    scanf("%d", &NUM);

        for(VAL = 1 ; VAL < NUM ; VAL++){

                    if (NUM % VAL == 0){
                    SUMA = SUMA + VAL;
            }
        }

        if(NUM == SUMA){
        printf("\n El numero es perfecto");
        }

            else{
        printf("\n El numero no es perfecto");
            }

return 0;
}

