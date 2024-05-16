/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flmarsou <flmarsou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:36:56 by flmarsou          #+#    #+#             */
/*   Updated: 2024/05/08 16:46:20 by flmarsou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp_lst;
	t_list	*temp_next;

	temp_lst = *lst;
	while (temp_lst)
	{
		temp_next = temp_lst -> next;
		(*del)(temp_lst -> content);
		free(temp_lst);
		temp_lst = temp_next;
	}
	*lst = NULL;
}
