int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int num;
	
	num = 0;
	sign = 1;
	i = 0;
	while (str[i])
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			i++;
		if (!(((str[i] >= '0') && (str[i] <= '9')) || (str[i] == '-') || (str[i] == '+')))
			return (0);
		if (str[i] == '-' || str[i] == '+')
		{
			if (!((str[i + 1]) >= '0' && (str[i + 1] <= '9')))
					return (0);
			if (str[i] == '-')
			{
				sign *= -1;
			}
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			num = (num * 10) + (str[i] - '0');
			if (!(((str[i + 1] >= '0') && (str[i + 1] <= '9'))))
				return (num * sign);
			i++;
		}
	}
	return (num * sign);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("ft_atoi(\"42\") = %d\n", ft_atoi("42"));
// 	printf("ft_atoi(\"   42\") = %d\n", ft_atoi("   42"));
// 	printf("ft_atoi(\"-42\") = %d\n", ft_atoi("-42"));
// 	printf("ft_atoi(\"+42\") = %d\n", ft_atoi("+42"));
// 	printf("ft_atoi(\"4193 with words\") = %d\n", ft_atoi("4193 with words"));
// 	printf("ft_atoi(\"words and 987\") = %d\n", ft_atoi("words and 987"));
// 	printf("ft_atoi(\"\") = %d\n", ft_atoi(""));
// 	printf("ft_atoi(\"   \") = %d\n", ft_atoi("   "));
// 	printf("ft_atoi(\"+-12\") = %d\n", ft_atoi("+-12"));
// 	printf("ft_atoi(\"0\") = %d\n", ft_atoi("0"));
// 	printf("ft_atoi(\"-0\") = %d\n", ft_atoi("-0"));
// 	printf("ft_atoi(\"   -0012a42\") = %d\n", ft_atoi("   -0012a42"));
// 	printf("ft_atoi(\"3.14159\") = %d\n", ft_atoi("3.14159"));
// 	printf("ft_atoi(\".1\") = %d\n", ft_atoi(".1"));
// 	printf("ft_atoi(\"  +0 123\") = %d\n", ft_atoi("  +0 123"));
// 	printf("ft_atoi(\"abc123\") = %d\n", ft_atoi("abc123"));
// 	printf("ft_atoi(\"++1\") = %d\n", ft_atoi("++1"));
// 	printf("ft_atoi(\"1e10\") = %d\n", ft_atoi("1e10"));
// 	printf("ft_atoi(\"-\") = %d\n", ft_atoi("-"));
// 	printf("ft_atoi(\"2147483647\") = %d\n", ft_atoi("2147483647"));
// 	printf("ft_atoi(\"-2147483648\") = %d\n", ft_atoi("-2147483648"));
// 	printf("ft_atoi(\"      \\t\\n42\") = %d\n", ft_atoi("      \t\n42"));
// 	printf("ft_atoi(\"-+42\") = %d\n", ft_atoi("-+42"));
// 	printf("ft_atoi(\"   +  42\") = %d\n", ft_atoi("   +  42"));
// 	printf("ft_atoi(\"0042\") = %d\n", ft_atoi("0042"));
// 	printf("ft_atoi(\"  0x1A\") = %d\n", ft_atoi("  0x1A"));
// }