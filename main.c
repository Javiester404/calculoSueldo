#include <stdio.h>

int main() {
    int hNormal, hSuple = 0, hExtra = 0;
    float sNormal, sSuple = 0, sExtra = 0, sTotal;
    char opc1, opc2;

    printf("Ingrese el numero de horas normales trabajadas en la semana: ");
    scanf("%d", &hNormal);

    printf("¿Ha trabajado horas suplementarias? \n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf(" %d", &opc1);
    if (opc1 == 1) {
        printf("Ingrese el numero de horas suplementarias trabajadas: ");
        scanf("%d", &hSuple);
    }

    printf("¿Ha trabajado horas extraordinarias? \n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf(" %d", &opc2);
    if (opc2 == 1) {
        printf("Ingrese el numero de horas extraordinarias trabajadas: ");
        scanf("%d", &hExtra);
    }

    sNormal = hNormal * 5;
    sSuple = hSuple * 7.5;
    sExtra = hExtra * 10;

    sTotal = sNormal + sSuple + sExtra;

    printf("\n--- Desglose del Sueldo ---\n");
    printf("Sueldo por horas normales: $%.2f\n", sNormal);
    printf("Sueldo por horas suplementarias: $%.2f\n", sSuple);
    printf("Sueldo por horas extraordinarias: $%.2f\n", sExtra);
    printf("--------------------------\n");
    printf("Sueldo total semanal: $%.2f\n", sTotal);

    return 0;
}
