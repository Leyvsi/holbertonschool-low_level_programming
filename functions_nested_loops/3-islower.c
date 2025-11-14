#include "main.h"

/**
 * _islower - vérifie si un caractère est en minuscule
 * @c: le caractère à tester
 *
 * Retourne : 1 si c est une lettre minuscule, 0 sinon
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
