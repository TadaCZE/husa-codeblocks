#include <stdio.h>
#include <stdlib.h>

int main()                                   //zacatek programu
{
    int delka = 5;                           //pocet prvku pole
    int* pole = malloc(delka * sizeof(int)); //alokujeme pole cisel

    if (pole != NULL)                        //pokud alokace uspela
    {
        for (int i = 0; i < delka; i++)      //pro vsechny prvky pole
            scanf("%i", &pole[i]);           //nacitame vstup

        for (int i = 0; i < delka; i++)      //pro vsechny prvky pole
            printf("pole[%i] = %i\n", i, pole[i]); //vypis

        free(pole);                          //uvolnujeme alokovanou pamet
    }
    return 0;                                //konec programu
}
