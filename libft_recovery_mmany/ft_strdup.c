/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmany <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 08:58:21 by mmany             #+#    #+#             */
/*   Updated: 2018/11/15 08:59:32 by mmany            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	i;
	char			*result;

	if (s1)
	{
		i = 0;
		while (s1[i] != '\0' && s1[i])
			i++;
		result = (char*)malloc(sizeof(*result) * i + 1);
		if (result == 0)
			return (result);
		i = 0;
		while (s1[i] != '\0' && s1[i])
		{
			result[i] = s1[i];
			i++;
		}
		result[i] = '\0';
		return (result);
	}
	return (0);
}
