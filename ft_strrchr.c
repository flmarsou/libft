/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 08:08:04 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/06 13:47:32 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	*ret;
	char	target;

	i = 0;
	ret = NULL;
	target = (char)c;
	while (str[i])
	{
		if (str[i] == target)
		{
			ret = (char *)&str[i];
		}
		i++;
	}
	if (str[i] == target)
	{
		ret = (char *)&str[i];
	}
	return (ret);
}
