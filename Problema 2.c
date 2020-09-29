#include <stdio.h>


int main(){

    int NUM, IMP, PAR;

    NUM = 0;
    IMP = 0;
    PAR = 0;

    for( NUM = 0 ; NUM <= 100 ; NUM++){
                if ( NUM % 2 == 0){
                    PAR = PAR + NUM;
                }
                else {
                    IMP = IMP + NUM;
                }
    }

    printf("\n\tLa suma de los numeros IMPARES es: %d", IMP);
    printf("\n\n\tLa suma de los numeros PARES es: %d", PAR);

    if( IMP > PAR){
        printf("\n\n\tLos numeros IMPARES proporcionan la mayor suma %d\n", IMP);
    }
    else{
        printf ("\n\n\tLos numeros PARES proporcionan la mayor suma %d\n" , PAR);
    }

return 0;
}
