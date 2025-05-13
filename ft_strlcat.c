/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:55:23 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/30 12:50:07 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	lendst;
	size_t	lensrc;

	if (!dst && size == 0)
		return (0);
	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	j = lendst;
	if ((lendst < (size - 1)) && size > 0)
	{
		while (src[i] && (lendst + i < (size - 1)))
		{
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	if (lendst >= size)
		lendst = size;
	return (lendst + lensrc);
}
