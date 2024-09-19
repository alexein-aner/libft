int	ft_isascii(char c)
{
	if (c >= 0 && c <= 126)
		return (1);
	return (0);
}
