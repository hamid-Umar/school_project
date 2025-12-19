#include <stdio.h>
#include <stdlib.h>
#include "bibliotheque.h"
struct point
 {
    float abscisse;
    float ordonnee; 
};
int main( void ) {
    int m , n, result;
    int o ,p ;
    unsigned int a;
    struct point  p1, p2;
    printf("Bienvenue dans ce programme qui va vous permettre de resoudre 6 types de probleme:\n");
    printf(" 1.Calcul du factoriel.\n 2.elever un nombre à une puissance donnée\n 3.Permutation de 02 nombres\n 4.Resolution des equations du second degre\n 5.Identifier un nombre premier\n 6.calcul de la distance entre 02 points du plan\n");
    printf("Entrer le numero correspondant au probleme que vous souhaiter resoudre");
    scanf("%d", &n);
    if (n==1)
    {
        printf("Entrer la valeur du nombre dont vous désirez calculer le factoriel\n");
        scanf("%u", &a);
        result = fact( a );
        printf("Le factoriel de votre nombre est %u!=%d\n", a, result);

    }else if (n==2)
    {
        printf("Entrer la valeur du nombre dont vous désirez calculer la puissance\n");
        scanf("%d",&m);
        printf("Entrer la valeur de la puissance désirée\n");
        scanf("%u", &a);
        result = power( m,a );
        printf("%d puissance %u est égale à : %d\n", m, a,result);

    }else if (n==3)
    {
        printf("Vous allez devoir entrer les 2 nombres a et b que vous voulez permuter\n");
        printf("Entrer la valeur de a\n");
        scanf("%d",&o);
        printf("Entrer la valeur de b\n");
        scanf("%d",&p);
        printf("Ainsi, nous avons pour premier nombre %d et pour second nombre %d\n", o , p);
        permutation(&o,&p);
        printf("Une fois la permutation effectuée, nous avons pour premier nombre %d et pour seconD nombre %d\n", o , p);

    }else if (n==4)
    {
       equation(); 
    }else if (n==5)
    {
       prime_number(); 
    }else if (n==6)
    {
        printf("Ce programme va permettre de calculer la distance entre 02 points du plan \n");
        printf("Point 1:\n");
        printf("Entrer l’abscisse du premier point \n");
        scanf("%f",&p1.abscisse);
        printf("Entrer l’ordonnée du premier point \n");
        scanf("%f",&p1.ordonnee);
        printf("Point 2:\n");
        printf("Entrer l’abscisse du second point \n");
        scanf("%f",&p2.abscisse);
        printf("Entrer l’ordonnée du second point \n");
        scanf("%f",&p2.ordonnee);
        distance(p1.abscisse,p1.ordonnee,p2.abscisse,p2.ordonnee);
    }else
    {
        printf(" Vous avez entré un numero ne correspondant  pas à un des problemes ci-dessus. Veuillez relancer le programme ");
    }
    
    
}