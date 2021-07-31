/*
#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	toHex(char *end)
{
	//int s = ft_strlen(end);
	//int i = 0;
	char base[] = "0123456789abcdef";
	//printf("%d\n",end);
	char d = end / 16;
	char r = end % 16;

	ft_putchar(base[d]);
	ft_putchar(base[r]);

	//if (d > 9)
	//	d = d - 10 + 97;
	//else
	//	d += 48;
	//if (r > 9)
	//	r = r - 10 + 97;
	//else
	//	r += 48;
	//ft_putchar(d);
	//ft_putchar(r);
}

//void	*ft_print_memory(void *addr, unsigned int size)
//{
//
//}
*/