int	ft_check_edge(int size, int **edge)
{
	int	*one_edge;
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		one_edge = edge[i];
		j = 0;
		while (j < size)
		{
			if (one_edge[j] < 1 || one_edge[j] > size)
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}