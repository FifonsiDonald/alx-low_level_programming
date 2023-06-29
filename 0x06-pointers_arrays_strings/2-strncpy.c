#include "main.h"

/**
 * _strncat - concatenates string of given number of byte
 * to another
 * @dest: where to concatenate
 * @src: string to concatenate
 * @n: num of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
        int i, j;

        while (j < n && src[j] != '\0')
        {
                dest[i] = src[j];
                i++;
                j++;
        }
        return (dest);
}
