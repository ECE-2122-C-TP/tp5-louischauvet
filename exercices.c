//
// Created by Louis on 11/10/2021.
//

#include <stdio.h>
#include "structures.h"



void exercice1()    {
    nombreRationnel x, y;
    y=saisirNbRationnel();
    x=saisirNbRationnel();
    afficher(x);
    afficher(multiplication(x,y));
    afficher(addition(x,y));
    PGCD(x);
    simplification(x);
}
void exercice2()    {
    tableaux();
}
void exercice3()    {
    void tab3x4();
}