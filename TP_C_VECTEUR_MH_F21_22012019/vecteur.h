#ifndef VECTEUR_H_INCLUDED
#define VECTEUR_H_INCLUDED

typedef struct{
    int N;
    double *Elts;
} T_Vec;

typedef int* vecteur;

//fonction 1 le nombre des elements qui seront lus
vecteur allocation(vecteur,int*);
//fonction 2 pour lire les nombres
void lire(vecteur,int);

//fonction 3 pour afficher les nombres lus
void affichage(vecteur,int);

//fonction 4 somme des valeurs
int somme1(vecteur,int);



#endif // VECTEUR_H_INCLUDED
