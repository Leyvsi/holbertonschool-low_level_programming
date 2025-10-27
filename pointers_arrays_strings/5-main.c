#include <stdio.h>
#include "main.h"

int main(void)
{
    char str1[] = "Hello, world!";
    char str2[] = "C programming";

    rev_string(str1);
    rev_string(str2);

    printf("%s\n", str1);
    printf("%s\n", str2);

    return 0;
}
