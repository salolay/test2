#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x, y, Resultat ;
    char op ;
    printf("Entrez la valeur de premier nombre x :\n");
    scanf("%f",&x);
    printf("Entrez la valeure de 2éme nombre y:\n" );
    scanf("%f",&y);
    printf("Entrez un operateur :\n");
    scanf(" %c",&op);
    switch(op){
        case '+' :printf( "x+y=%2f" , x+y) ;
        break;
        case '-' :printf("x-y=%2f" , x-y) ;
        break;
        case '*' : printf("x*y=%2f",x-y);
        break;
        case '/' : if(y!=0)
        printf("x/y=%f", x/y);
        else
             printf("le divesion est impossible!");
        break;
        case 'q' : printf("l'utilusateur a quiter le programme .");
    }

   return 0;
}
