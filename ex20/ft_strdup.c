/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 14:17:05 by jpartane          #+#    #+#             */
/*   Updated: 2019/10/21 10:56:59 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len])
	{
		len++;
	}
	dest = (char*)malloc(sizeof(*dest) * (len + 1));
	len = 0;
	while (src[len])
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
