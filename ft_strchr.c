/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:29:24 by flmarsou          #+#    #+#             */
/*   Updated: 2024/04/30 16:12:38 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	*ret;
	char	target;

	i = 0;
	ret = (char *)str;
	target = (char)c;
	while (ret[i])
	{
		if (ret[i] == target)
		{
			return (ret + i);
		}
		i++;
	}
	if (target == ret[i])
	{
		return (ret + i);
	}
	return (NULL);
}
