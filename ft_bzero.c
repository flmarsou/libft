/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:20:23 by flmarsou          #+#    #+#             */
/*   Updated: 2024/04/30 16:13:54 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t size)
{
	size_t			i;
	unsigned char	*erase;

	i = 0;
	erase = (unsigned char *)str;
	while (i < size)
	{
		erase[i] = '\0';
		i++;
	}
}
