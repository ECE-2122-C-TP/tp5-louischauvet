//
// Created by Louis on 11/10/2021.
//
#include <stdio.h>
#include"structures.h"
#define N 100

/*EXO 1*/

nombreRationnel saisirNbRationnel()   {     /*permet de saisir un nombre rationnel*/
    nombreRationnel NbRt;
    printf("saisissez une valeur pour le numerateur\n");
    scanf("%d", &NbRt.num);
    printf("saisissez une valeur pour le denominateur\n");
    scanf("%d", &NbRt.den);
    return(NbRt);
}

void afficher(nombreRationnel x)    {       /*affiche une variable de type structure*/
    printf("%d / %d\n", x.num, x.den);
    return;
}

nombreRationnel multiplication(nombreRationnel x, nombreRationnel y)    {   /*multiplie les numérateurs et dénominateurs
 * respectifs de deux variables de types structure*/
    nombreRationnel z;
    z.num=x.num*y.num;
    z.den=x.den*y.den;
    return(z);
}

nombreRationnel addition(nombreRationnel x, nombreRationnel y)  {   /*additionne selon la formule du tp, deux variables
 * de types structure*/
    nombreRationnel z;
    z.num= x.num*y.den + x.den*y.num;
    z.den= x.den*y.den;
    return(z);
}

int PGCD(nombreRationnel x)  {          /*donne le PGCD entre deux nombres*/
    int min = (x.num>x.den) ? x.den : x.num;
    int max = (x.num>x.den) ? x.num : x.den;
    int i = min, j = min, r;
    do  {
        if  (min % i == 0)  {
            j=i;    }
        i=i-1;    }
    while(max%j != 0);
    j = (j==1) ? 0 : j;
    printf("le PGCD = %d \n", j);
    return j;
}

nombreRationnel simplification(nombreRationnel x)   {       /*permet de simplifier le numerateur et le
 * denominateur d'un nombre rationnel*/
    nombreRationnel z;
    int d = PGCD(x);
    z.num = x.num/d;
    z.den = x.den/d;
    printf("%d ; %d", z.num, z.den);
    return z;
}

/*EXO 2*/

int tab_N[N];

int tableaux()  {       /*fonction permettant de rentrer N valeurs dans un tableaux a une colonne*/
    int n, i, max=0;
    printf("Combien de valeurs dans le tableaux ?\n");
    scanf("%d", &n);
    if (n>100 && n<=0)  {
        printf("Donner une valeur comprise entre 0 et  100");
        scanf("%d", &n);
    }
    else {
        n=n;
    }
    for(i=0; i<n; i++)    {
        printf("%d eme valeur\n", i);
        scanf("%d", &tab_N[i]);
        max = (max<=tab_N[i]) ? tab_N[i] : max;
    }
    printf("max tableau = %d", max);
}

/*EXO 3*/

int tab[3][4];
int tab_2[12];
void tab3x4()   {       /*fonction transformant un tableau 3x4 en 1x12*/
    int i, j, k=0;
    printf("rentrer les valeurs dans le tableau");
    for(i=0; i<4; i++) {
        scanf("%d %d %d", &tab[0][i], &tab[1][i], &tab[2][i]);
    }
    for(i=0; i<4; i++)  {
        for(j=0; j<3; j++)  {
            tab_2[k]=tab[i][j];
            k=k+1;
        }
    }
return;
}


