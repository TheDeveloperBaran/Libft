/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakilic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 16:25:27 by bakilic           #+#    #+#             */
/*   Updated: 2022/12/27 16:25:29 by bakilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*space;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (0);
	space = malloc(count * size);
	if (!space)
		return (0);
	ft_memset(space, 0, count * size);
	return (space);
}
