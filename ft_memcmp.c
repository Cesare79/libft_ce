void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if(n == 0 || dest == src)
		return (dest);
	char	*dest_cpy;
	char	*src_cpy;

	dest_cpy = (char *)dest;
	src_cpy = (char *)src;
	while (n--)
		*dest_cpy++ = *src_cpy++;
	return (dest);
}
