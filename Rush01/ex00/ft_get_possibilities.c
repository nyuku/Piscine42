#include <stdlib.h>

int	ft_iterative_factorial(int nb);

int	**ft_get_possibilities(int edge_size)
{
	int nb_possibilities;
	int	**possibilities;
	int	i;
	int j;
	int z;

	i = 0;
	z = 0;
	nb_possibilities = ft_iterative_factorial(edge_size);
	possibilities = malloc(nb_possibilities * sizeof (int*));
	while (i < nb_possibilities / 2)
	{
		possibilities[i] = malloc(edge_size * sizeof (int));
		if(i == 0)
		{
			j = 0;
			while(j < edge_size)
			{
				possibilities[i][j] = j + 1;
				j++;
			}
		} 
		else 
		{
			j = 0;
			while(j < edge_size)
			{
				possibilities[i][j] = possibilities[i - 1][j];
				j++;
			}

			j = possibilities[i][z];
			possibilities[i][z] = possibilities[i][z + 1];
			possibilities[i][z + 1] = j; 
			
			if (z == edge_size - 2)
				z = 0;
			else
				z++;
		}
		i++;
	}
	i = nb_possibilities / 2;
	z = 0;	
	while (i < nb_possibilities)
	{
		possibilities[i] = malloc(edge_size * sizeof (int));
		if(i == 0)
		{
			j = 0;
			while(j < edge_size)
			{
				possibilities[i][j] = edge_size - j;
				j++;
			}
		} 
		else 
		{
			j = 0;
			while(j < edge_size)
			{
				possibilities[i][j] = possibilities[i - 1][j];
				j++;
			}

			j = possibilities[i][z];
			possibilities[i][z] = possibilities[i][z + 1];
			possibilities[i][z + 1] = j; 
			
			if (z == edge_size - 2)
				z = 0;
			else
				z++;
		}
		i++;
	}

	return (possibilities);
}

void free_possibilities(int edge_size, int **possibilities)
{
	int	i;
	int nb_possibilities;

	nb_possibilities = edge_size * (edge_size - 1) * 2;
	i = 0;
	while (i < nb_possibilities)
	{
		free(possibilities[i]);
		i++;
	}
	free(possibilities);
}

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		if (total)
		{
			total *= nb;
		}
		else
		{
			total = nb;
		}
		nb--;
	}
	return (total);
}
