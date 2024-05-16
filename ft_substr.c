/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:37:02 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/06 15:53:32 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t length)
{
	size_t	i;
	char	*ret;

	i = 0;
	if (start >= ft_strlen(str))
		length = 0;
	if (length > ft_strlen(str) - start)
		length = ft_strlen(str) - start;
	ret = malloc(sizeof(char) * (length + 1));
	if (ret == NULL)
	{
		return (NULL);
	}
	while (length > 0)
	{
		ret[i] = str[start];
		i++;
		start++;
		length--;
	}
	ret[i] = '\0';
	return (ret);
}
