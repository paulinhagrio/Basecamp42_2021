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

void	toHex(char c)
{
	char	*base;
	int		d;
	int		r;

	d = c / 16;
	r = c % 16;
	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[d]);
	ft_putchar(base[r]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	s;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			toHex(str[i]);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
