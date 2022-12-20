#inlude "main.h"
/**
 * rev_string - revers string
 * @s: pointer value
 */

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char str;

	while (s[a] != '\0')
		a++;
	while (b < a--)
	{
		str = s[b];
		s[b++] = a[a];
		a[a] = str;
	}
}
