//
// Created by Louis on 11/10/2021.
//

#ifndef TP_5_STRUCTURES_H
#define TP_5_STRUCTURES_H
typedef struct {
    int num, den;
}nombreRationnel;

nombreRationnel saisirNbRationnel();
void afficher(nombreRationnel x);
nombreRationnel multiplication(nombreRationnel x, nombreRationnel y);
nombreRationnel addition(nombreRationnel x, nombreRationnel y);
int PGCD(nombreRationnel x);
nombreRationnel simplification(nombreRationnel x);
int tableaux();
void tab3x4();









#endif //TP_5_STRUCTURES_H
