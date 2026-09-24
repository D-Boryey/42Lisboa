void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>
// int main(void)
// {
// 	int n1 = 10;
// 	int n2 = 20;
// 	int *a = &n1;
// 	int *b = &n2;

// 	printf("%d\n", *a);
// 	printf("%d\n", *b);
// 	ft_swap(a,b);
// 	printf("%d\n", *a);
// 	printf("%d\n", *b);
// }