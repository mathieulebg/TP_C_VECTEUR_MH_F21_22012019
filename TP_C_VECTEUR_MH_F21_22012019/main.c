/* Le but de cet exercice est de montrer ici l'utilisation possible des vecteurs
Definition brève : Un vecteur est couramment utilisé pour 2 points, exemple simple du segment en mathématiques
*/


#include <stdio.h>
#include <stdlib.h>
#include "vecteur.h" //on inclut vecteur.h (fichier externe)

void main()
{
	vecteur v;
	int n;
	v=allocation(v,&n); //appel de la fonction d’allocation
	lire(v,n); //appel de la fonction lire

	affichage(v,n);
	int s1=somme1(v,n);
	printf("\n\nSomme des elements: %d",s1);
}

vecteur allocation(vecteur v1, int* n)
{
	printf("Veuillez entrer vos valeurs: ");
	scanf("%d",n);
	v1=(int*)malloc(*n*sizeof(int)); //sizeof donne la taille en bytes
	return v1;
}
void lire(vecteur v1, int n)
{
	printf("Entrer les elements:");
	for(int i=0;i<n;i++)
	{
		printf("\telem %d= ",i+1);
		scanf("%d",&v1[i]);
	}
}
void affichage(vecteur v1, int n)
{
	printf("La chaine est: ");
	for(int i=0;i<n;i++)
	printf("%d ",v1[i]);
}
int somme1(vecteur v1, int n)
{
	int s=0;
	for(int i=0;i<n;i++)
	s+=v1[i]; //s=s+v1[i];
	return s;
}

