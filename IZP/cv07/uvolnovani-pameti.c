#include <stdio.h>
#include <stdlib.h>

int main() {
    int* x;                    //ukazatel na cele cislo
    x = malloc(sizeof(int));   //alokujeme misto pro jedno cele cislo

    if (x != NULL)             //pokud alkoace uspela
    {
        printf("Alokace pameti uspela \n"); //vypis
        free(x);               //uvolnujeme alokovanou pamet
        return 0;              //program konci bez chyby
    }
    else                       //jinak
    {
        fprintf(stderr, "Alokace pameti selhala\n"); //chybovy vypis
        return 1;              //program konci s chybou
    }
}
