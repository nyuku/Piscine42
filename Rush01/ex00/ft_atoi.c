int	ft_atoi(char *arg)
{
	int		v;
	int		i;

	i = 0;
	v = -1;
	while (arg[i] && arg[i] >= '0' && arg[i] <= '9')
	{
		if (!i)
			v = arg[i] - '0';
		else 
		{
			v = v * 10;
			v = v + (arg[i] - '0');
		}
		i++; 
	}
	return (v);
}
