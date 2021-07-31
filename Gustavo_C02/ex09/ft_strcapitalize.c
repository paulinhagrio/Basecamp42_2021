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

int	beforeToCap(char c)
{
	if (c == ' ' || c == '-' || c == '+')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (i > 0 || beforeToCap(str[i - 1]) == 0)
				str[i] += 32;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0 || beforeToCap(str[i - 1]) == 1)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
