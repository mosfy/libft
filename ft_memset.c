/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfrances <tfrances@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 01:40:21 by tfrances          #+#    #+#             */
/*   Updated: 2025/10/15 23:08:52 by tfrances         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// C program to demonstrate working of memset()
#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *) s;
	while (i < n)
	{
		d[i] = c;
		i++;
	}
	s = (void *)d;
	return (s);
}

// int	main()
// {
// 	char str[] = {1,10,13};
// 	int i = 0;

// 	// Fill 8 characters starting from str[13] with '.'
// 	ft_memset(str, 102, 2);

// 	printf("After memset():\n");
// 	while(i<3)
// 	{
// 		printf("str[i] : %d\ni: %d\n", str[i], i);
// 		i++;	
// 	}
// 	return (0);
// }
