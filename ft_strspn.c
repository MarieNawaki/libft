/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:20:29 by mmany             #+#    #+#             */
/*   Updated: 2018/11/23 17:20:32 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strspn(const char *s1, const char *s2)
{
	size_t	i;

	i = 0;
	while (*s1)
	{
		if (ft_strchr(s2, *s1))
		{
			i++;
		}
		else
			return (i);
		s1++;
	}
	return (i);
}
