/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:38:10 by flmarsou          #+#    #+#             */
/*   Updated: 2024/04/30 16:16:56 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t size)
{
	size_t			i;
	unsigned char	*ret;
	unsigned char	target;

	i = 0;
	ret = (unsigned char *)str;
	target = (unsigned char)c;
	while (i < size)
	{
		if (ret[i] == target)
		{
			return (ret + i);
		}
		i++;
	}
	return (NULL);
}
