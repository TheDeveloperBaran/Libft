/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakilic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:16:20 by bakilic           #+#    #+#             */
/*   Updated: 2022/12/27 16:16:24 by bakilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		ft_lstlast(*lst)-> next = new;
		ft_lstlast(*lst)-> next = NULL;
	}
}
