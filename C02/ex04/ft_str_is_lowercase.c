int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c >= 'a' && c <= 'z')
		{
			i++;
		}
		else if (c == '\0')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
