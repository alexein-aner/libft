#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (to_find[j] != '\0' && (i + j) < n && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
