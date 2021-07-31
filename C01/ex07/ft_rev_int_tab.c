void	ft_rev_int_tab(int *tab, int size)
{
	int	min;
	int	max;
	int	aux;

	min = 0;
	max = size - 1;
	while (min < max)
	{
		aux = tab[min];
		tab[min] = tab[max];
		tab[max] = aux;
		min++;
		max--;
	}	
}

#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int *tab;
	int counter;

	tab = calloc(10, sizeof(int));
	counter = 0;
	while (counter < 10)
	{
		tab[counter] = counter;
		counter++;
	}
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 10);
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	return (0);
}
