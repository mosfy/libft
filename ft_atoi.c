/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 02:33:08 by tfrances          #+#    #+#             */
/*   Updated: 2025/10/24 03:10:56 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int				res;
	int				i;
	int				sign;
	unsigned char 	*n;

	res = 0;
	i = 0;
	sign = 1;
	n = (unsigned char *)nptr;
	while (n[i] == ' ' || (n[i] >= '\t' && n[i] <= '\r'))
	{
		i++;
	}
	if (n[i] == '+' || n[i] == '-')
	{
		if (n[i] == '-')
			sign = -1; 
		i++;
	}
	while (n[i] >= '0' && n[i] <= '9')
	{
		res = 10 * res + (n[i] - '0');
		i++;
	}
    return (res * sign);
}