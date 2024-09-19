#include "libft.h"

int	ft_isalnum(char *str)
{
	if (ft_isalpha(str) || ft_isdigit(str))
		return (0);
	return (1);
}
