/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rchiorea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 17:58:55 by rchiorea          #+#    #+#             */
/*   Updated: 2016/12/22 19:17:53 by rchiorea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*d;

	i = 0;
	d = malloc(sizeof(char) * len + 1);
	if (!d)
		return (0);
	while (len > 0)
	{
		d[i] = s[start];
		i++;
		start++;
		len--;
	}
	d[i] = '\0';
	return (d);
}
