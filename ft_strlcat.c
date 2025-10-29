#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t dlen = 0;
	size_t slen = 0;
	size_t i = 0;

	if (!dst || !src)
		return 0;

	while (dlen < size && dst[dlen] != '\0')
		dlen++;

	slen = ft_strlen(src);

	if (dlen == size)
		return dlen + slen;

	while (src[i] && dlen + i + 1 < size)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';

	return dlen + slen;
}
