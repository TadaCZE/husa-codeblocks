#include <stdio.h>
#include <stdlib.h>

int* soucet(int delka, int* arr1, int* arr2);
char* konkatenace(char* str1, char* str2);

int main()                                //zacatek programu
{
    int arr1[3] = {10, 20, 30};           //prvni pole
    int arr2[3] = {40, 50, 60};           //druhe pole
    int* arr3 = soucet(3, arr1, arr2);    //volame funkci soucet
    if (arr3 != NULL)                     //pokud alokace uspela
    {
        for (int i = 0; i < 3; i++)       //pro vsechny prvky pole
            printf("arr3[%i] = %i\n", i, arr3[i]); //vypis
        free(arr3);                       //uvolnujeme pamet
    }

    char* str1 = "Hello";                 //prvni retezec
    char* str2 = "Ahoj";                  //druhy retezec
    char* str3 = konkatenace(str1, str2); //volame funkci konkatenace
    if (str3 != NULL)                     //pokud alokace uspela
    {
        printf("%s\n", str3);             //vypisujeme retezec
        free(str3);                       //uvolnujeme pamet
    }
    return 0;                             //konec programu
}
