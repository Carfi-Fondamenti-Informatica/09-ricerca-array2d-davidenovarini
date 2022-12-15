#include "lib.h"
bool controllo(char nomi[10][20], char nome[20], int &c){

    for (int n = 0; n < 10; n++)
    {
        for (int i = 0; i < 20; i++)
        {
            if (nomi [n][i] != nome[i]){
                i = 20;  //20 variabile che vanno da (0-19)
            }
            if (i == 19){ //se tutte le letteri sono uguali allora va bene
                c = n;//posizione, essendo che è nell'array va da 0-19
                return true;
            }
        }
    }
    return false;
}
