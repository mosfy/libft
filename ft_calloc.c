/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 02:57:42 by tfrances          #+#    #+#             */
/*   Updated: 2025/10/24 03:09:31 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*calloc(size_t nmemb, size_t size)
{
	unsigned char tmp;
	int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	i = 0;
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	while (i <= nmemb * size)
	{
		tmp[i] = 0;
	}
	return (tmp);
}