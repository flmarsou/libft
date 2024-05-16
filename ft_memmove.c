/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 13:49:43 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/08 14:29:34 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t		i;
	char		*d;
	const char	*s;

	i = 0;
	d = (char *)dest;
	s = (const char *)src;
	if (dest == NULL || src == NULL)
		return (NULL);
	if (d < s)
	{
		ft_memcpy(dest, src, size);
	}
	else if (d > s)
	{
		while (size > 0)
		{
			d[size - 1] = s[size - 1];
			size--;
		}
	}
	return (dest);
}
