#include <stdio.h>
#include "main.h"

int main(void)
{
    char str[] = "Hello, world!";
    int len;

    len = _strlen(str);
    printf("La longueur de \"%s\" est %d\n", str, len);

    return 0;
}
