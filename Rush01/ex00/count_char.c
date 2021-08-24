int	count_char(char *nbr)
{
	int	i;
	int	n;
	int	c;

	i = 0;
	n = 0;
	c = 1;
	while (nbr[i])
	{
		while (c == 1 && nbr[i] && (nbr[i] >= '0' || nbr[i] <= '9'))
		{
			c = 0;
			n++;
			i++;
		}
		while (c == 0 && nbr[i])
		{
			if (nbr[i] == ' ')
				c = 1;
			else if (!(nbr[i] >= '0' && nbr[i] <= '9'))
				return (0);
			i++;
		}
	}
	return (n);
}
