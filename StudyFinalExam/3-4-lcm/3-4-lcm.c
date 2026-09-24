

unsigned int gcd(unsigned int a, unsigned int b)
{
	unsigned int d;

	if (a > b)
		d = b;
	else
		d = a;

    while (!((a % d == 0) && (b % d == 0)))
	{
		d--;
	}
	return (d);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
    if (a == 0 || b == 0)
        return (0);
    return (a / gcd(a, b) * b);
}

#include <stdio.h>
#include <stdlib.h>
int main(int ac, char *av[])
{
	(void)ac;
	printf("%d\n", lcm(atoi(av[1]), atoi(av[2])));
	return (0);
}