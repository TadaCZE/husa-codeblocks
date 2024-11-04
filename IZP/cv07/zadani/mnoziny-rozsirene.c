#include <stdbool.h>
#include <stdlib.h>

typedef struct Smnozina           //deklarujeme datovy typ pro strukturu
{                                 //jmenem "Smnozina" se dvema polozkami
    int delka;                    //pocet polozek
    int* pole;                    //dynamicky alokovane pole
} mnozina;                        //jmeno tohoto typu je "mnozina"

mnozina* alokujMnozinu(int delka);
void nactiMnozinu(mnozina* A);
void vypisMnozinu(mnozina* A);
bool jeMnozina(mnozina* A);

mnozina* konkatenaceMnozin(mnozina* A, mnozina* B);
void uvolniMnozinu(mnozina* A);
mnozina* prunikMnozin(mnozina* A, mnozina* B);

int main()                         // zacatek programu
{
    mnozina* A = alokujMnozinu(4); //alokujeme mnozinu A (a jeji pole)
    if(A==NULL || A->pole==NULL) return 1; //osetreni alokace
    nactiMnozinu (A);              //do mnoziny A nacitame vstup
    vypisMnozinu (A);              //vypisujeme mnozinu A

    mnozina * B = alokujMnozinu (3); //alokujeme mnozinu B (a jeji pole)
    if(B==NULL || B->pole==NULL) return 2; //osetreni alokace
    nactiMnozinu(B);               //do mnoziny B nacitame vstup
    vypisMnozinu(B);               //vypisujeme mnozinu B
    if(!jeMnozina(A) || !jeMnozina(B)) return 3; //osetreni vstupu

    mnozina* C = konkatenaceMnozin(A, B);  //C je konkatenaci A a B
    if(C==NULL || C->pole==NULL) return 4; //osetreni alokace
    vypisMnozinu(C);               //vypisujeme mnozinu C

    uvolniMnozinu(C);              //uvolnujeme mnozinu C

    C = prunikMnozin (A, B);       //C je prunikem A a B
    if(C==NULL || C->pole==NULL) return 5; //osetreni alokace
    vypisMnozinu (C);              //vypisujeme mnozinu C

    uvolniMnozinu (C);             //uvolnujeme mnozinu C
    uvolniMnozinu (B);             //uvolnujeme mnozinu B
    uvolniMnozinu (A);             //uvolnujeme mnozinu A

    return 0;                      //program konci bez chyby
}   //navratovou hodnotu overime prikazem "echo $?" (Unix)
    //                               nebo "echo $LastExitCode" (VSCode)
