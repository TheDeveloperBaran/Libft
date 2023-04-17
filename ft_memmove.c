/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakilic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 21:13:05 by bakilic           #+#    #+#             */
/*   Updated: 2022/12/13 21:13:27 by bakilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*ret;

	if (!dst && !src)
		return (0);
	ret = dst;
	if (dst > src)
	{
		while (len > 0)
		{
			*((char *) dst + len - 1) = *((char *) src + len - 1);
			len--;
		}
	}
	else
	{
		while (len)
		{
			*((char *) dst++) = *((char *) src++);
			len--;
		}
	}
	return (ret);
}
