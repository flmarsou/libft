/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:57:21 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/16 15:26:24 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *str1, const char *str2)
{
	size_t	i;
	size_t	j;
	char	*ret;

	i = 0;
	j = 0;
	ret = malloc(sizeof(char) * (ft_strlen(str1) + ft_strlen(str2) + 1));
	if (ret == NULL)
	{
		return (NULL);
	}
	while (str1[i])
	{
		ret[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		ret[i + j] = str2[j];
		j++;
	}
	ret[i + j] = '\0';
	return (ret);
}
