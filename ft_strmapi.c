/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:05:49 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/07 11:17:11 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *str, char (*func)(unsigned int, char))
{
	size_t	i;
	char	*ret;

	i = 0;
	ret = malloc(sizeof(char) * ft_strlen(str) + 1);
	if (ret == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		ret[i] = func(i, str[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
