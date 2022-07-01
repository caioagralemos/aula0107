#include <stdio.h> 
#include <string.h>

int main(){

    char c[200];
    fgets (c, 200, stdin);

    printf("%s", c);
    printf ("{%d}", c[3]);
    printf ("%d", '\0');

}