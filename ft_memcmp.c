/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 20:02:05 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/30 12:33:43 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*cst1;
	const unsigned char	*cst2;

	cst1 = s1;
	cst2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (cst1[i] != cst2[i])
			return (cst1[i] - cst2[i]);
		i++;
	}
	return (0);
}
