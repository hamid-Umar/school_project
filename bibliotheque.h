#ifndef MY_MATH_LIB_H
#define MY_MATH_LIB_H
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );
// Définition d'une fonction d'élévation à une puissance donnée.
int power( int value, unsigned int pow );
// Définition d’une fonction de permutation
void permutation( int *a, int *b);
// Définition d’une fonction de résolution des équations du second dégré
void equation();
// Définition d’une fonction pour identifier un nombre premier
void prime_number();
// Définition d’une fonction qui calcule la distance entre 02 points du plan  
void distance(float x1,float y1,float x2,float y2);
#endif