/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlefort <mlefort@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:31:22 by mlefort           #+#    #+#             */
/*   Updated: 2023/11/30 12:34:20 by mlefort          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * -1;
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	if (i == 0)
		i++;
	return (i);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*str;
	long int	nbr;
	int			i;

	nbr = n;
	len = count(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	i = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		str[0] = '-';
		i++;
	}
	while (len > i)
	{
		len--;
		str[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (str);
}
