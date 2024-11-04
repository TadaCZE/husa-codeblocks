#include <stdio.h>
#include <stdlib.h>

int main() {
    int poleA[10];                            //automaticke pole cisel
    int* poleB = malloc(10 * sizeof(int));    //dynamicke pole cisel
    printf("PoleA ma %i B\n", sizeof(poleA)); //vypis velikost poleA (40)
    printf("PoleB ma %i B\n", sizeof(poleB)); //vypis velikost poleB (4)
    free(poleB);

    return 0;
}
