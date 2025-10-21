/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:58:23 by tfrances          #+#    #+#             */
/*   Updated: 2025/10/21 18:45:29 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	int		i;
	char	*s;

	s = (char *) string;
	i = ft_strlen(string);
	// if (!string || !searchedChar)
	// {
	// 	return (NULL);
	// }
	while (i != 0)
	{
		if (s[i] == (char)searchedChar)
		{
			return (&s[i]);
		}
		i--;
	}
	return (NULL);
}
