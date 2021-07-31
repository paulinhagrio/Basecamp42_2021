#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	centena;
	int	dezena;
	int	unidade;

	centena = 0;
	while (centena <= 7)
	{
		dezena = centena + 1;
		while (dezena <= 8)
		{
			unidade = dezena + 1;
			while (unidade <= 9 )
			{
				ft_putchar(centena + '0');
				ft_putchar(dezena + '0');
				ft_putchar(unidade + '0');
				if (centena < 7)
					write(1, ", ", 2);
				unidade ++;
			}	
			dezena++;
		}
		centena++;
	}
}
