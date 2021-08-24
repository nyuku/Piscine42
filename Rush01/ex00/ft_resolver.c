//                           oooo$$$$$$$$$$$$oooo
//                       oo$$$$$$$$$$$$$$$$$$$$$$$$o
//                    oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o         o$   $$ o$
//    o $ oo        o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o       $$ $$ $$o$
// oo $ $ "$      o$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$o       $$$o$$o$
// "$$$$$$o$     o$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$o    $$$$$$$$
//   $$$$$$$    $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$$$$$
//   $$$$$$$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$$$$$  """$$$
//    "$$$""""$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     "$$$
//     $$$   o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     "$$$o
//    o$$"   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$o
//    $$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" "$$$$$$ooooo$$$$o
//   o$$$oooo$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$$$$$$$$$$$$$$$$
//   $$$$$$$$"$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$""""""""
//  """"       $$$$    "$$$$$$$$$$$$$$$$$$$$$$$$$$$$"      o$$$
//             "$$$o     """$$$$$$$$$$$$$$$$$$"$$"         $$$
//               $$$o          "$$""$$$$$$""""           o$$$
//                $$$$o                 oo             o$$$"
//                 "$$$$o      o$$$$$$o"$$$$o        o$$$$
//                   "$$$$$oo     ""$$$$o$$$$$o   o$$$$""  
//                      ""$$$$$oooo  "$$$o$$$$$$$$$"""
//                         ""$$$$$$$oo $$$$$$$$$$       
//                                 """"$$$$$$$$$$$        
//                                     $$$$$$$$$$$$       
//                                      $$$$$$$$$$"      
//                                       "$$$""""

int	ft_iterative_factorial(int nb);

struct	s_resolve {
	int	*edge_colup;
	int	*edge_coldown;
	int	*edge_colleft;
	int	*edge_colright;
	int	**possibilities;
	int nb_possibilities;
	int	**sudoku;
	int	edge_size;
};

int	ft_resolv_line(int line, struct s_resolve *resolv);
int	ft_resolv_column(int line, struct s_resolve *resolv);
void apply_possibilities_column(int index_of_possibilities, int column, int start, struct s_resolve *resolv);
int can_apply_possibility_column(int index_of_possibilities, int column, struct s_resolve *resolv);
void apply_possibilities_line(int index_of_possibilities, int line, int start, struct s_resolve *resolv);
int can_apply_possibility_line(int index_of_possibilities, int line, struct s_resolve *resolv);
int index_of_possibilities(int left, int right, int start_at, struct s_resolve *resolv);
void	ft_print_sudoku(int size, int **sudoku);

/**
 *  this function resolv the problem
 *  
 *  @index_of_possibilities index of table of possibilties
 *  @line index of line
 *  @start initial position to copy the data
 *  @resolv structur of data
 */
int	ft_resolver(int **edge, int **possibilities, int **sudoku, int edge_size)
{
	struct s_resolve	resolv;

	resolv.edge_size = edge_size;
	resolv.sudoku = sudoku;
	resolv.possibilities = possibilities;
	resolv.nb_possibilities = ft_iterative_factorial(edge_size);
	resolv.edge_colup = edge[0];
	resolv.edge_coldown = edge[1];
	resolv.edge_colleft = edge[2];
	resolv.edge_colright = edge[3];
	return ft_resolv_line(0, &resolv);	
}

// (*1) if we can also solve the column everything is fine
// (*2) the end !! and all's well that ends well
// (*3) normally in all other cases when exiting the array index we are in error. 
int	ft_resolv_line(int line, struct s_resolve *resolv)
{
	int	line_possibility_index;

	line_possibility_index = index_of_possibilities(resolv->edge_colleft[line], resolv->edge_colright[line], 0, resolv);
	while(line_possibility_index > -1)
	{
		if(can_apply_possibility_line(line_possibility_index, line, resolv))
		{
			apply_possibilities_line(line_possibility_index, line, line, resolv);

			if (line < resolv->edge_size - 1)
			{
				if(ft_resolv_column(line, resolv)) // (*1) 
					return (1);
			}
			else
				return (1); // (*2)
		}
		line_possibility_index = index_of_possibilities(resolv->edge_colleft[line], resolv->edge_colright[line], ++line_possibility_index, resolv);
	}
	return (0); // (*3)
}

int	ft_resolv_column(int column, struct s_resolve *resolv)
{
	int	column_possibility_index;

	column_possibility_index = index_of_possibilities(resolv->edge_colup[column], resolv->edge_coldown[column], 0, resolv);
	while(column_possibility_index > -1)
	{
		if(can_apply_possibility_column(column_possibility_index, column, resolv))
		{
			apply_possibilities_column(column_possibility_index, column, column, resolv);

			if(ft_resolv_line(column + 1, resolv)) 
				return (1);
		}
		column_possibility_index = index_of_possibilities(resolv->edge_colup[column], resolv->edge_coldown[column], ++column_possibility_index, resolv);
	}
	return (0); 
}

int index_of_possibilities(int left, int right, int start_at, struct s_resolve *resolv)
{
	int analys;
	int i;
	int last;

	while(start_at < resolv->nb_possibilities)
	{
	
	int z;
	z=0;
	while (z < resolv->edge_size)
	{
		z++;
	}
		analys = 1;
		i = 0;
		while (i < resolv->edge_size)
		{
			if (!i)
				last = resolv->possibilities[start_at][i];
			else
			{
				if (last < resolv->possibilities[start_at][i])
				{
					last = resolv->possibilities[start_at][i];
					analys++;
				}
			}
			i++;
		}
		if (analys == left)
		{
			analys = 1;
			i = (resolv->edge_size - 1);
			while (i >= 0)
			{
				if (i == (resolv->edge_size - 1))
					last = resolv->possibilities[start_at][i];
				else
				{
					if (last < resolv->possibilities[start_at][i])
					{
						last = resolv->possibilities[start_at][i];
						analys++;
					}
				}
				i--;
			}
			if (analys == right)
				return start_at;
		}
		start_at++;
	}
	return (-1);
}


/**
 *  verify if we can apply the possibility to sudoku on line
 * 
 *  @index_of_possibilities index of table of possibilties
 *  @line index of line
 *  @start initial position to copy the data
 *  @resolv structur of data
 */
int can_apply_possibility_line(int index_of_possibilities, int line, struct s_resolve *resolv)
{
	int i;
	int ok;

	i=0;
	while (i < resolv->edge_size)
	{
		i++;
	}

	i = 0;
	ok = 1;
	while (i < line)
	{
		if (resolv->sudoku[line][i] != resolv->possibilities[index_of_possibilities][i])
		{
			ok = 0;
			break;
		}
		i++;
	}
	return ok;
}


/**
 *  apply one possibility to sudoku on one column
 * 
 *  @index_of_possibilities index of table of possibilties
 *  @line index of line
 *  @start initial position to copy the data
 *  @resolv structur of data
 */
void apply_possibilities_line(int index_of_possibilities, int line, int start, struct s_resolve *resolv)
{
	while (start < resolv->edge_size)
	{
		resolv->sudoku[line][start] = resolv->possibilities[index_of_possibilities][start];
		start++;
	}
}

/**
 *  verify if we can apply the possibility to sudoku on line
 * 
 *  @index_of_possibilities index of table of possibilties
 *  @line index of line
 *  @start initial position to copy the data
 *  @resolv structur of data
 */
int can_apply_possibility_column(int index_of_possibilities, int column, struct s_resolve *resolv)
{
	int i;
	int ok;

	ok = 1;
	i= 0;
	while (i < resolv->edge_size)
	{
		i++;
	}
	i = 0;
	ok = 1;
	while (i < column + 1)
	{
		if (resolv->sudoku[i][column] != resolv->possibilities[index_of_possibilities][i])
		{
			ok = 0;
			break;
		}
		i++;
	}
	return ok;
}


/**
 *  apply one possibility to sudoku on one column
 * 
 *  @index_of_possibilities index of table of possibilties
 *  @column index of column
 *  @start initial position to copy the data
 *  @resolv structur of data
 */
void apply_possibilities_column(int index_of_possibilities, int column, int start, struct s_resolve *resolv)
{
	while (start < resolv->edge_size)
	{
		resolv->sudoku[start][column] = resolv->possibilities[index_of_possibilities][start];
		start++;
	}
}

