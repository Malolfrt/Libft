/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:36:15 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/30 14:40:26 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*p;
	size_t		i;

	p = (void *)s;
	i = 0;
	while (i < n)
	{
		if (p[i] == (char)c)
			return ((void *)(p + i));
		i++;
	}
	return (0);
}
