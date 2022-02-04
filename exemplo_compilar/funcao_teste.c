#include <unistd.h>

void funcao_teste(char f)
{
	write(1, &f, 1);
}
