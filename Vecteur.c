#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "vecteur.h"
#include <limits.h>

void Affiche_Vecteur(int *tab, int Taille)
{
    printf("[");
	for (int i=0; i<Taille; i++)
    {
		printf(" %d ",tab[i]);
    }
    printf("]\n");
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------
// min; max; occ


int fctmaximum(int *tab, int Taille)
{
    int temp = INT_MIN, max = 0;
    for (int i = 0; i < Taille; i++)
    {
        if (tab[i] > temp)
        {
            max = tab[i];
        }
        temp = tab[i];
    }
    return max;
}


int fctminimum(int *tab, int Taille)
{
    int temp = INT_MAX, min = 0;
    for (int i = 0; i < Taille; i++)
    {
        if (tab[i] < temp)
        {
            min = tab[i];
        }
        temp = tab[i];
    }
    return min;
}


int fctoccurence(int *tab, int Taille, int elem)
{
    int occ = 0;
    
    for (int i = 0; i < Taille; i++)
    {
        if (tab[i] == elem)
        {
            occ++;
        }
    }
    return occ;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------
// trishell

void tri_shell(int *tab, int Taille)
{
    int n, i, j, valeur;
    
    n=0;
    
    while(n<Taille)
    {
        n=3*n+1;
    }
    
    while(n!=0)
    {
        n=n/3;
        for (i=n;i<Taille;i++)
        {
            valeur=tab[i];
            j=i;
            
            while((j>(n-1)) && (tab[j-n]>valeur))
            {
                tab[j]=tab[j-n];
                j=j-n;
            }
            tab[j]=valeur;
        }
    }
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------
// dichotomie

int Fct_dichotommie (int *tab, int Taille, int element)
{
    int Borne_inf = 0;
    int Borne_sup = Taille;
    int Milieu = 0;
    return 0;
}

//------------------------------------------------------------------------------------------------------------------------------------------------------------------
// element diff


int Fct_element_diff (int *tab, int Taille)
{
    int element_a_comparer;
    int k = 0;
    int l = 0;
    for (int i = 0; i < Taille; i++)
    {
        element_a_comparer = tab[i];
        for (int j = 0; j < Taille; j++)
        {
            if (element_a_comparer == tab[j])
            {
                k++;
            }
        }
        if (k == 1)
        {
            l++;
        }
        k = 0;
    }
    return l;
}
