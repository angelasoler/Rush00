
#include <unistd.h>
#include "ft_putchar.c"

void rush(int x, int y)
{
char	v;
//char f;
char i[2];
	
v = 92; 
//f = 20;
	
i[1] = '1'; //onde y é igual a 1
	
	while (i[1] != y) // Enquanto Y é diferente do valor de y inserido, condiciona if
	{		
		i[0] = '1'; //onde x igual a 1
		while (i[0] != x) //Enquanto o valor de x inserido é diferente de 1, condiciona if
		{
			if (i[0] == x && i[1] > 1) //que se x inserido é igual a 1 e Y igual a 1, adiciona ao texto uma barra normal
			{
				ft_putchar('/');
				i[0]++;
			}	
			else if ((i[0] == x && i[1] == 1) || (i[0] == 1 && i[1] == y)) //caso if1 seja falso, se x for igual ao x inserido e y igual 1 OU x igual a 1 e y igual ao y inserido adiciona-se barra invertida
			{
				ft_putchar(v); //código ascii de barra invertida
				//i[1]++;	
				//i[0]++;
			}			
			else if ((i[0] == 1 && i[0] == x) || (i[0] == x && i[1] == 1)) //caso if2 seja falso, se x for igual a 1 e igual ao x
			{
				ft_putchar('*');
				//i[1]++;	
				//i[0]++;
			}	
			else //para nenhuma das condições anteriores
			{
				ft_putchar(' '); //blank space
				i[1]++;	
				//i[0]++;
			}	
		}
		ft_putchar('\n');
		i[1]++;	
		i[0]++;
		
	}

}