#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 2, t, i, f = 0, a = 0, b = 1;

    printf("\nHolis. %cCu%cntos t%crminos quieres obtener?  ->  ",168 ,160,130 );
    scanf("%d", &t);
    
    if(t <= 0){
        printf("Ingresaste un n%cmero inv%clido o cero, el programa finalizar%c",163 ,160 ,160);
    }else{
    	printf("%d", f);
        for (i = 0; i < t - 1; i++) {
            f = a + b;
            a = b;
            b = f;
            printf(", %d", f);
        }
    }
    return 0;
}
