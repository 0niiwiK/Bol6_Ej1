#include <stdio.h>

int main() {
    int num;
    printf("Intoduce un numero: ");
    scanf("%d",&num);
    if (num==0)
        printf("El numero introducido es 0\n");
    else {
        if (num>0)
            printf("El numero introducido es positivo\n");
        else
            printf("El numero introducido es negativo\n");
        if (num%2==0)
            printf("El numero es par");
        else
            printf("El numero es impar");
    }
    return 0;
}
