#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 2;
    int t,i,f;

    printf("\n Holis. Cuantos terminos quieres obtener?  ->  ");
    scanf("%d", &t);

    for (i = 0; i < t-1; i++) {
        f = (n - 1) + (n - 2);
        printf("%d, ", f);
        n++;
    }
    f = (n - 1) + (n - 2);
    printf("%d", f);
}
