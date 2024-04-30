#include <unistd.h>

extern void	ft_putchar(char c);

void	printf_char_n_times(int nn, char bb)
{
	while (nn > 0)
	{
		ft_putchar(bb);
		nn--;
	}
}

void	print_middle_rows(int leng)
{
	ft_putchar('B');
	if (leng == 2)
	{
		ft_putchar('B');
	}
	else if (leng >= 3)
	{
		printf_char_n_times(leng - 2, ' ');
		ft_putchar('B');
	}
}

void	print_first_rows(int leng)
{
	ft_putchar('A');

	 if (leng >= 3)
	{
		printf_char_n_times(leng - 2, 'B');
		ft_putchar('C');
	}
}

void	print_last_rows(int leng, int deep)
{
	if (deep >= 3)
	{
		ft_putchar ('C');
		
		 if (leng >= 3)
		{
			printf_char_n_times(leng - 2, 'B');
			ft_putchar('A');
		}
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 2;
	//first_rows
	print_first_rows(x);
	ft_putchar('\n');
	//middle_rows
	while (i < y)
	{
		print_middle_rows(x);
		i++;
		ft_putchar('\n');
	}
	//last_rows
	print_last_rows(x, y);
	ft_putchar('\n');
}
