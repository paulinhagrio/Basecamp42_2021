#include <stdio.h>

void	ft_ft(int *nbr)
{
	int	n;

	n = 42;
	nbr = &n;//o ponteiro nbr está apontando para o endereço de memória de n
	*nbr = n;
	printf ("%d\n", *nbr);//com * indica que estou acessando o valor desse endereço de memória e não o endereço
}
