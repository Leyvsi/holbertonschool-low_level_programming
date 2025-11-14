#include "main.h"

/**
 * _isalpha - vérifie si un caractère est une lettre
 * @c: le caractère à tester
 *
 * Retourne : 1 si c est une lettre (minuscule ou majuscule), 0 sinon
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return 1;
else
return 0;
}
