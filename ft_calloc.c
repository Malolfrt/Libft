/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 16:16:53 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/30 12:34:56 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	total;

	total = nmemb * size;
	if (size && (nmemb > SIZE_MAX / size))
		return (NULL);
	tab = malloc(total);
	if (!tab)
		return (0);
	ft_bzero(tab, total);
	return (tab);
}
