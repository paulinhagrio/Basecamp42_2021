#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int block_a;
	int block_b;

	block_a = 0;
	block_b = 0;
	while (block_a <= 99)
	{
		block_b = block_a + 1;
		while (block_b <= 99)
		{
			ft_putchar(block_a / 10 + '0');
		ft_putchar(block_a % 10 + '0');
		write (1, " ", 1);
		ft_putchar(block_b / 10 + '0');
		ft_putchar(block_b % 10 + '0');
		if ((block_a / 10 != 9 || (block_a % 10 != 8))
		write(1, ", ", 2);
		block_b++;
		}		
	block_a++;
}
