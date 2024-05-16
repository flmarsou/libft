/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 08:53:22 by flmarsou          #+#    #+#             */
/*   Updated: 2024/04/30 16:14:40 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t size)
{
	size_t			i;
	unsigned char	*ret;

	i = 0;
	ret = (unsigned char *)str;
	while (i < size)
	{
		ret[i] = c;
		i++;
	}
	return (ret);
}
