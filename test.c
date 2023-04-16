#include "includes/libft.h"

int main(int argc, char const *argv[])
{
	int	arr[25];

	for (int i = 0; i < 25; i++)
	{
		arr[i] = i;
	}
	ft_print_int_array_capped_line(arr, 25, 1);
	ft_print_int_array(arr, 25, 1);
	size_t	arrs[25];

	for (size_t i = 0; i < 25; i++)
	{
		arrs[i] = i;
	}
	ft_print_size_t_array_capped_line(arrs, 25, 1);
	ft_print_size_t_array(arrs, 25, 1);
	return 0;
}
