#include "main.h"


/**
 * *_strcat - concatenates @src to @dest
 * @src: the source string to append to @dest
 * @dest: the destination string to be concatenated upon
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)

{

int i;
int j;

for (j = 0; dest[j] != '\0'; j++)
{}
for (i = 0; src[i] != '\0'; i++)
{
dest[j + i] = src[i];
}
dest[j + i] = '\0';
return (dest);
}
