/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 02:57:42 by tfrances          #+#    #+#             */
/*   Updated: 2025/10/24 19:34:59 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	if (nmemb == 0 || size == 0 || (nmemb * size > INT_MAX))
		return (NULL);
	i = 0;
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	ft_bzero (tmp, nmemb * size);
	return (tmp);
}
