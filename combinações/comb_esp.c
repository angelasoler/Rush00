#include <unistd.h>
#include <stdio.h>

void comb_esp()
{
	int x = 11;
	// unsigned int y = 3;
	// unsigned int z = y - x;
	char c = '0' + (x%10);

	write(1, &c, 1);
	// printf("%d", z);
	// int array[2][3];
	// int index;

	// index = 0;

	// while (index < 3)
	// {

	// }

}

int main ()
{
	comb_esp();
}