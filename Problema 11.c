#include <stdio.h>

int main(){

    int A, B, C, D, E, F, G, H, I, J;

    printf("\n\n\tIngresar Primer valor: ");
        scanf("%d", &A);
    printf("\n\n\tIngresar Segundo valor: ");
        scanf("%d", &B);
    printf("\n\n\tIngresar Tercer valor: ");
        scanf("%d", &C);
    printf("\n\n\tIngresar Cuarto valor: ");
        scanf("%d", &D);
    printf("\n\n\tIngresar Quinto valor: ");
        scanf("%d", &E);
    printf("\n\n\tIngresar Sexto valor: ");
        scanf("%d", &F);
    printf("\n\n\tIngresar Septimo valor: ");
        scanf("%d", &G);
    printf("\n\n\tIngresar Octavo valor: ");
        scanf("%d", &H);
    printf("\n\n\tIngresar Noveno valor: ");
        scanf("%d", &I);
    printf("\n\n\tIngresar Decimo valor: ");
        scanf("%d", &J);


        if( A > B && B > C && C > D && D > E && E > F && F > G && G > H && H > I && I > J ){
                printf("\n\n\tLa secuencia de los numeros ingresados es CRECIENTE", A);
        }
            else{
                printf("\n\n\tLa secuencia de los numeros ingresados NO es CRECIENTE", A);
            }
return 0;
}
