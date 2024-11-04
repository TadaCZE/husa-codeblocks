#include <stdio.h>

int* foo()      //definice funkce
{
    int a = 10; //automaticky alokovane cislo "a"
    return &a;  //vracime adresu cisla "a"
}

int main()      //zacatek programu
{
    int* x;     //ukazatel "x"
    x = foo();  //do "x" ukladame adresu cisla "a"
    printf("%i\n", *x); // CHYBA -- vypis promenne
                        // ktera jiz neexistuje
    return 0;   //konec programu
}
