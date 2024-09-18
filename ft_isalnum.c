int	ft_isalnum(char *str)
{
	if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z') || (*str >= '0' && *str <= '9')))
		return (0);
	return (1);
}

