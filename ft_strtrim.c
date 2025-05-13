/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 14:42:25 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/30 13:41:31 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	fin;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	fin = ft_strlen(s1);
	start = 0;
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (ft_strchr(set, s1[fin - 1]) && (s1[fin - 1] != '\0')
		&& (start < fin))
			fin--;
	len = (fin - start);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	else
		ft_strlcpy(str, &s1[start], len + 1);
	return (str);
}
