#include <unistd.h>

void	ft_putstr(char *str)
{
	int		a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char *str;

	str = "";
	ft_putstr(str);
	write(1, "\n", 1);
	str = "This is a test string.";
	ft_putstr(str);
	write(1, "\n", 1);
	str = "This is a gianormous test string, testing to see whatever happens in here....";
	ft_putstr(str);
	write(1, "\n", 1);
	return (0);
}