#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "bibliotheque.h"
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
unsigned int result = 1;
while ( value > 1 ) {
result *= value;
value --;
}
return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
if ( pow == 0 ) return 1;
if ( pow == 1 ) return value;
int accumulator = 1;
while( pow > 0 ) {
accumulator *= value;
pow--;
}
return accumulator;
}
// Définition d’une fonction permutation 
void permutation(int * a,int * b){
    int c= 0;
    c = *a ;
    *a = *b;
    *b = c;
}
// Définition d’une fonction de résolution des équations du second dégré
void equation()
{
    float a , b , c , d , x , y , z ;
    printf("Ce programme vous permettra de résoudre les équations de la forme ax^2 + bx + c\n");
    printf("Entrer la valeur de a \n");
    scanf("%f", &a);
    printf("Entrer la valeur de b \n");
    scanf("%f", &b);
    printf("Entrer la valeur de c \n");
    scanf("%f", &c);
    while (a==0)
    {
        printf("En entrant a = 0, il ne s’agit plus d’une équation du second dégré \n");
        printf("Entrer la valeur de a \n");
        scanf("%f", &a);
        printf("Entrer la valeur de b \n");
        scanf("%f", &b);
        printf("Entrer la valeur de c \n");
        scanf("%f", &c);   
    }
    d = b*b - 4*a*c;
    if (d>0)
    {
        x = ((-1*b) - sqrt(d))/(2*a) ;
        y = ((-1*b) + sqrt(d))/(2*a) ;
        printf("votre équation admet deux solutions réelles qui sont %f et %f ", x, y);
    }else if (d == 0)
    {
        z = (-1*b)/(2*a);
        printf("votre équation admet pour solution double %f", z);
    }else
    {
        printf("Votre équation n’admet pas de solutions réelles");
    }     
}
// Définition d’une fonction pour identifier un nombre premier
void prime_number() {
    int a;
    int i = 0;
    printf(" Entrer la valeur de votre nombre ");
    scanf("%d",&a);
    int b = (int)sqrt(a);
    if (a ==0 ||a== 1 ||a==2)
    {
        printf("Votre nombre n’est pas premier");
    }
    
    for ( i = 2; i <= b; i++)
    { 
        if (a%i == 0)
        {
            printf("Votre nombre n’est pas premier");
            break;
        } else if (i == b && a%i!= 0 )
        {   
            printf("Votre nombre est premier");
            
        }   
    }    
}
// Définition d’une fonction qui calcule la distance entre 02 points du plan


void distance(float x1,float y1,float x2,float y2) 
{
    float r ,d;
    r = ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1));
    d = sqrt(r);
    printf("La distance entre vos 02 points est de :%f", d);

}