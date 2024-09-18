int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	if (!(*str >= 'a' && *str <= 'z') && !(*str >= 'A' && *str <= 'Z'))
		return (0);
	return (1);
}
