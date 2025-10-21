/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:08:30 by tfrances          #+#    #+#             */
/*   Updated: 2025/10/21 19:15:24 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strcmp(const char *s1, const char *s2)
{
	char	*str1;
	char	*str2;
	int		i;

	str1 = (char *) s1;
	str2 = (char *) s2;
	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++
	}
	return (0)
}
