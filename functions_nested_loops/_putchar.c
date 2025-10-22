#include <unistd.h>

/**
 * _putchar - écrit le caractère c sur la sortie standard
 * @c: le caractère à imprimer
 *
 * Return: 1 en cas de succès
 * En cas d’erreur, -1 est retourné et errno est défini
 */
int _putchar(char c)
{
    return (write(1, &c, 1));
}
