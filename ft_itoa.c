/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:14:07 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/13 10:54:45 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrlen(int nbr)
{
	int	i;

	i = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

static char	*putnbr(int nbr)
{
	int		length;
	int		sign;
	char	*str;

	if (nbr < 0)
	{
		sign = 1;
		nbr *= -1;
	}
	else
		sign = 0;
	length = nbrlen(nbr) + sign;
	str = malloc(sizeof(char) * (length + 1));
	str[length] = '\0';
	length--;
	if (str == NULL)
		return (NULL);
	while (length >= 0)
	{
		str[length--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (sign == 1)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int nbr)
{
	char	*str;

	if (nbr == -2147483648)
	{
		str = malloc(sizeof(char) * 12);
		str = ft_memcpy(str, "-2147483648", 12);
		return (str);
	}
	if (nbr == 0)
	{
		str = malloc(sizeof(char) * 1);
		str = ft_memcpy(str, "0", 1);
		return (str);
	}
	str = putnbr(nbr);
	return (str);
}
