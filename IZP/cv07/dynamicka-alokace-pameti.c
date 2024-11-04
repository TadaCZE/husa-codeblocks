#include <stdio.h>
#include <stdlib.h>

int* alokuj()           //definice funkce
{
    int* b;             //ukazatel "b"
    b = malloc(sizeof(int)); //alokujeme misto pro jedno cele cislo
    *b = 10;            //jeho hodnotu nastavujeme na 10
    return b;           //vracime ukazatel "b"
}

int main()              //zacatek programu
{
    int* y;             //ukazatel "y"
    y = alokuj();       //do "y" ukladame adresu cisla "b"
    printf("%i\n", *y); //vypis cisla (probehne bez problemu)
    return 0;           //konec programu
}
