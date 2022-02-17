#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 2, t, i, f = 0, a = 0, b = 1;

    printf("\nHolis. %cCu%cntos t%crminos quieres obtener?  ->  ",168 ,160,130 );
    scanf("%d", &t); //Obtenemos la cantidad de términos a calcular
    
    //Si el numero ingresado es menor o igual a cero, muestra un mensaje y sale del programa.
    if(t <= 0){
        printf("Ingresaste un n%cmero inv%clido o cero, el programa finalizar%c",163 ,160 ,160);
    }else{ //Si el numero ingresado es mayor a cero, continua ejecucion
    	printf("%d", f); //Se muestra el primer numero de la secuencia, 0
        for (i = 0; i < t - 1; i++) { //Calculo e impresion de los numeros siguientes
            f = a + b;
            a = b;
            b = f;
            printf(", %d", f);
        }
    }
    return 0;
}
