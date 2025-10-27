#include <stdio.h>
#include "main.h"

int main(void)
{
    int n = 42;

    printf("Avant reset: n = %d\n", n);
    reset_to_98(&n);
    printf("Après reset: n = %d\n", n);

    return 0;
}
