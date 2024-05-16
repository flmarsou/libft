/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:29:56 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/06 10:08:55 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t amount, size_t size)
{
	void	*ptr;

	if (amount == 0 || size == 0)
	{
		return (malloc(0));
	}
	ptr = malloc(amount * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero(ptr, (amount * size));
	return (ptr);
}
