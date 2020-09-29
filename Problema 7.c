#include <stdio.h>
#define MAX 50000000

int main(){

    int CONT, DIV, SUMA;


        for(CONT = 1 ; CONT < MAX ; CONT++){
                SUMA = 0 ;
                    for(DIV = 1 ; DIV < CONT ; DIV++){
                            if(CONT % DIV == 0){
                                SUMA = SUMA + DIV;
                            }
                    }
         if(CONT == SUMA)
               printf("\n\n%8d", CONT);
        }

        printf("\n\n\n\n");

}


