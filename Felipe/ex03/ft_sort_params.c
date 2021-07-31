#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	su;
	unsigned char	st;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (s1[i] == '\0')
			return (0);
	}	
	su = s1[i];
	st = s2[i];
	return (su - st);
}

void	ft_sort(int len, char *sorting[])
{
	int		i;
	int		d;
	char	*temp;

	i = 1;
	while (i < len)
	{
		d = i + 1;
		while (d < len)
		{
			if (ft_strcmp(sorting[d], sorting[i]) < 0)
			{
				temp = sorting[i];
				sorting[i] = sorting[d];
				sorting[d] = temp;
			}
			d++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	x;

	ft_sort(argc, argv);
	i = 1;
	x = 0;
	while (i < argc)
	{	
		x = 0;
		while (argv[i][x] != '\0')
		{
			write(1, &argv[i][x], 1);
			x++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
