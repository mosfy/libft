/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 17:12:27 by tfrances          #+#    #+#             */
/*   Updated: 2025/10/28 02:03:40 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countworld(char *s, char c)
{
	int	i;
	int	res;

	res = 0;
	i = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c)
				i++;
			res++;
		}
		i++;
	}
	return (res);
}

size_t	ft_strlenchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**res;
	char	*tmp;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	tmp = (char *)s;
	ft_strtrim(tmp, &c);
	res = malloc((ft_countworld(tmp, c) + 1) * (sizeof (char *)));
	if (!res)
		return (NULL);
	res[j] = malloc(ft_strlenchr(tmp + i, c) + 1);
	while (tmp[i])
	{
		if (tmp[i] == c)
		{
			while (tmp[i] == c)
				++i;
			res[j][k++] = '\0';
			j++;
			k = 0;
			res[j] = malloc(ft_strlenchr(tmp + i, c) + 1);
		}
		res[j][k++] = tmp[i++];
	}
	return (res);
}
