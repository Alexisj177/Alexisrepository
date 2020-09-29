#include <stdio.h>
#define CLAVE 23645

int main(){

    int C, CONT=0;

    while(C != CLAVE && CONT < 3){
            printf("\n\tIngresar CLAVE NUMERICA: ");
            scanf("%d", &C);
            CONT++;
    }

    if(C == 23645){
        printf("\n\tClave correcta\n");
    }

    else{
        printf("\n\tADVERTENCIA: CLAVE INCORRECTA INGRESADA 3 VECES\n");
    }

return 0;
}
