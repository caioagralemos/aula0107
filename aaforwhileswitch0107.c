#include <stdio.h>

int main() {

int n, contador, cont;
char c;
contador = 0;
scanf ("%d", &n);

// exemplo while
while (n > contador){
    printf("Drugo\n");
    contador++;
}

// exemplo for
for (int cont = 0; cont < n; cont++){
    printf("Drugo\n");
}

// exemplo switch

int a, desconto;
scanf ("%d", &a);
desconto = 0;

switch (a) {
    case 15:
    desconto++;

    case 20:
    desconto++;

    default:
    break;

}

printf ("%d\n", desconto);

}