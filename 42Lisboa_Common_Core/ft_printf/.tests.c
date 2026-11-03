#include "ft_printf.h"

int main()
{
	char str[] = "Hello World!";
	int a = 10;
	int b = 5;
	int c = a + b;
	printf("World! Hello!\n");
	printf("%s\n", str);
	printf("%d + %d equals %d\n", a, b, c);
	return (0);
}
