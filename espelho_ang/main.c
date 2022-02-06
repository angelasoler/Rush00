#include "ft_putchar.c"

int main(void)
{
	int x = 5;
	char ar[4] = "/**";
	ar[3] = 92;

	ft_putchar(ar, x);
}

