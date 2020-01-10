#include <stdio.h>

int main(void){ 

int interface;
float moeda;

    printf("Insira um menu:: \n 1- Euro - USD  \n 2- USD  - Euro \n 3- Euro - CAD \n 4- CAD - Euro\n");
    scanf("%d", &interface);

    switch(interface){ 

        case 1:

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f EUR = %.2f USD\n", moeda, moeda*1.12);

        break;

        case 2: 

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f USD = %.2f EUR\n", moeda, moeda/1.12);

        break;

        case 3: 

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f EUR = %.2f CAN", moeda, moeda*1.45);

        break;

        case 4:

        printf("Insira o valor que quer converter: ");
        scanf("%f", &moeda);
        printf("%.2f CAN = %.2f EUR", moeda, moeda/1.45);

        break;

        default:
        printf("Opção invalida\n");
    }
}