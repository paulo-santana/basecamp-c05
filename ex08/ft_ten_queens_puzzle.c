#include <unistd.h>

void	print_queens(int board[10][10])
{
	char	n;
	int		i;
	int		j;

	i = -1;
	while (++i < 10)
	{
		j = -1;
		while (++j < 10)
			if (board[j][i])
			{
				n = j + '0';
				write(1, &n, 1);
			}
	}
	write(1, "\n", 1);
}

int	can_place(int board[10][10], int col, int row)
{
	int	i;
	int	j;

	j = -1;
	while (++j < col)
		if (board[row][j])
			return (0);
	i = 0;
	while (j-- > 0)
	{
		i++;
		if (row - i >= 0 && board[row - i][j])
			return (0);
		if (row + i < 10 && board[row + i][j])
			return (0);
	}
	return (1);
}

int	place_queen(int board[10][10], int col)
{
	int	row;
	int	boards_found;
	int	result;

	boards_found = 0;
	if (col > 9)
	{
		print_queens(board);
		return (1);
	}
	row = -1;
	result = 0;
	while (++row < 10)
	{
		if (can_place(board, col, row))
		{
			board[row][col] = 1;
			result += place_queen(board, col + 1);
		}
		board[row][col] = 0;
	}
	return (result);
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	board[10][10];

	i = -1;
	while (++i < 100)
		board[i / 10][i % 10] = 0;
	place_queen(board, 0);
	return (place_queen(board, 0));
}
