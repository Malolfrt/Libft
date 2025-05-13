/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 17:08:37 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/30 12:33:19 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_tab(char const *s, int c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*put_in_tab(char const *s, int c)
{
	char	*str;
	int		len;
	int		i;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	*cpy_in_tab(int i, char const *s, int c, char **tab)
{
	tab[i] = put_in_tab(s, c);
	if (!tab[i])
	{
		while (i > 0)
		{
			i--;
			free(tab[i]);
		}
		free(tab);
		return (NULL);
	}
	return (tab[i]);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	char	**tab;

	if (!s)
		return (NULL);
	count = count_tab(s, c);
	tab = (char **)malloc(sizeof(char *) * (count + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < count)
	{
		while (*s == c && *s)
			s++;
		if (*s && *s != c)
			tab[i] = cpy_in_tab(i, s, c, tab);
		while (*s != '\0' && *s != c)
			s++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
