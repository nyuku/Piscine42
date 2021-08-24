int	ft_atoi(char *arg);
void	ft_ctf(char *nbr, int edge_size, int **edge)
{
	int	i;
	int	n;
	int	s;
(void) edge;
	i = 0;
	n = 0;
	s = 1;
	while (nbr[i])
	{
		while (s == 1 && nbr[i] && (nbr[i] >= '0' && nbr[i] <= '9'))
		{
			s = 0;
			edge[n / edge_size][n % edge_size] = ft_atoi(nbr + i);
			i++;
			n++;
		}
		while (s == 0 && nbr[i])
		{
			if (nbr[i] == ' ')
				s = 1;
			i++;
		}
	}
}	
