/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakilic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:18:22 by bakilic           #+#    #+#             */
/*   Updated: 2022/12/27 16:18:24 by bakilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	lst_len;

	lst_len = 1;
	if (!lst)
		return (0);
	while (lst -> next != NULL)
	{
		lst_len++;
		lst = lst -> next;
	}
	return (lst_len);
}
