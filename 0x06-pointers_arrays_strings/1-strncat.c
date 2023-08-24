#include "main.h"

/**
*_strncat - fxn to concat src to dest
*@src: string to concat
*@dest: string it is to be concat to
*@n: nnumber of bytes to be cconcat
*Return:return pointer to destination dest
*/

char *_strncat(char *dest, char *src, int n)

{
	int length_of_string, z;

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
	length_of_string++;
	}
	for (z = 0 ; z < n && src[z] != '\0' ; z++,length_of_string++ )
		dest[length_of_string] = src[z];
	dest[length_of_string] = '\0';
	return (dest);

}
