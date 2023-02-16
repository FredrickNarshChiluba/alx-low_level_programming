#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - main block
 * Return: 1
 */
int main(void)
{
	char a[] = "and that piece of art is useful\"";

	char b[] = " - Dora Korpa, 2015-10-19\n";

	int s = strlen(strcat(a , b));

	write(2,
	      "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
	      s);
	return (1);
}
