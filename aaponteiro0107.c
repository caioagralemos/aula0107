#include <stdio.h>

int main (){
    int *p;
    int a = 8;
    p = &a;

    printf ("----\nlocal de a na memoria: %p\n", p);

    // mudando o valor de a por p
    (*p) = 10;
    printf ("----\nnovo valor de a: %d\n----\n", a);

    return 0;
}