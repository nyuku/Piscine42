int	count_char(char *nbr);
void	ft_putstr(char *str);
void	ft_putstr_error(char *str);
int	**ft_sudoku_alloc(int size);
void	ft_print_sudoku(int size, int **sudoku);
void	ft_sudoku_free(int size, int **sudoku);
int	ft_is_square(int total_numbers_entered);
int	**ft_sides_alloc(int number_of_sides);
void	ft_ctf(char *nbr, int edge_size, int **edge);
int	ft_resolver(int **edge, int **possibilities, int **sudoku, int edge_size);
int**	ft_get_possibilities(int edge_size);
void	ft_sides_free(int **ret);
void free_possibilities(int edge_size, int **possibilities);

int print_error(int errorcode)
{
	ft_putstr_error("Error\n");
	return (errorcode);
}

int	main(int argc, char **argv)
{
	int	**sudoku;
	int	**edge;	
	int **possibilities;
	int	total_number;
	int	edge_size;
	
	if (argc != 2)
		return (print_error(1));

	total_number = count_char(argv[1]);
	if (!total_number)
		return (print_error(2));

	if ((edge_size = ft_is_square(total_number)) == 0)
		return (print_error(3));

	if (edge_size != 4)
		return (print_error(1));

	sudoku = ft_sudoku_alloc(edge_size);
	if (!sudoku)
		return (print_error(4));
	
	edge = ft_sides_alloc(edge_size);
	if (!edge)
		return (print_error(5));

	ft_ctf(argv[1], edge_size, edge);

	possibilities = ft_get_possibilities(edge_size);

	if(!ft_resolver(edge, possibilities, sudoku, edge_size))
		return (print_error(6));

	ft_print_sudoku(edge_size, sudoku);
	
	ft_sudoku_free(edge_size, sudoku);

	ft_sides_free(edge);

	free_possibilities(edge_size, possibilities);

	return (0);
}

