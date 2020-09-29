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

        if( A > B && A > C && A > D && A > E && A > F && A > G && A > H && A > I && A > J ){
                printf("\n\n\tEl valor mayor es el PRIMER ingresado", A);
        }
        else{}

        if( B > A && B > C && B > D && B > E && B > F && B > G && B > H && B > I && B > J ){
                printf("\n\n\tEl valor mayor es el SEGUNDO ingresado", B);
        }
        else{}

        if( C > A && C > B && C > D && C > E && C > F && C > G && C > H && C > I && C > J ){
                printf("\n\n\tEl valor mayor es el TERCER ingresado", C);
        }
        else{}

        if( D > A && D > B && D > C && D > E && D > F && D > G && D > H && D > I && D > J ){
                printf("\n\n\tEl valor mayor es el CUARTO ingresado", D);
        }
        else{}

        if( E > B && E > C && E > D && E > A && E > F && E > G && E > H && E > I && E > J ){
                printf("\n\n\tEl valor mayor es el QUINTO ingresado", E);
        }
        else{}

        if( F > B && F > C && F > D && F > E && F > A && F > G && F > H && F > I && F > J ){
                printf("\n\n\tEl valor mayor es el SEXTO ingresado", F);
        }
        else{}

        if( G > B && G > C && G > D && G > E && G > F && G > A && G > H && G > I && G > J ){
                printf("\n\n\tEl valor mayor es el SEPTIMO ingresado", G);
        }
        else{}

        if( H > B && H > C && H > D && H > E && H > F && H > G && H > A && H > I && H > J ){
                printf("\n\n\tEl valor mayor es el OCTAVO ingresado", H);
        }
        else{}

        if( I > B && I > C && I > D && I > E && I > F && I > G && I > H && I > A && I > J ){
                printf("\n\n\tEl valor mayor es el NOVENO ingresado", I);
        }
        else{}

        if( J > B && J > C && J > D && J > E && J > F && J > G && J > H && J > I && J > A ){
                printf("\n\n\tEl valor mayor es el DECIMO ingresado", J);
        }
        else{}


return 0;
}
