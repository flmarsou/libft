/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:06:08 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/07 10:48:51 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isset(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *str, const char *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (str == NULL || set == NULL)
		return (NULL);
	i = 0;
	start = 0;
	end = ft_strlen(str);
	while (isset(str[start], set) == 1)
		start++;
	while (end > start && isset(str[end - 1], set) == 1)
		end--;
	trimmed = malloc(sizeof(char) * (end - start + 1));
	if (trimmed == NULL)
		return (NULL);
	while (start < end)
	{
		trimmed[i] = str[start];
		i++;
		start++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
