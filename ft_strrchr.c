/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bakilic <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:35:55 by bakilic           #+#    #+#             */
/*   Updated: 2022/12/13 21:45:16 by bakilic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	new_c;

	new_c = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == new_c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
