#include <stdlib.h>

typedef struct Smnozina //deklarujeme datovy typ pro strukturu
{                       //jmenem "Smnozina" se dvema polozkami
    int delka;          //pocet polozek
    int* pole;          //dynamicky alokovane pole
} mnozina;              //jmeno tohoto typu je "mnozina"

int main() {
    mnozina A;          //promenna typu "mnozina" jmenem "A"
    A.delka = 0;        //pole obshauje 0 prvku
    A.pole = NULL;      //adresa pole je NULL (neni alokovano)

    return 0;
}
