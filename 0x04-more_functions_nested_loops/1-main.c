#include "main.h"

int main()
{
	char b;
	printf("insert the character");
	scanf("%c", &b);
	 printf("%c: %d\n", b, _isdigit(b));
	 return (0);
}
