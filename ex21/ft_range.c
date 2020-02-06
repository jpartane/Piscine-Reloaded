/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:15:54 by jpartane          #+#    #+#             */
/*   Updated: 2019/10/18 15:20:08 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*dest;
	int		i;

	if (min >= max)
		return (NULL);
	dest = (int*)malloc(sizeof(*dest) * (max - min));
	i = 0;
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}
