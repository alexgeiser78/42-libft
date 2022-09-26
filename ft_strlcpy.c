/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageiser <ageiser@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:41:28 by ageiser           #+#    #+#             */
/*   Updated: 2022/09/20 17:04:39 by ageiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t longueur)
{
	size_t	i;

	i = 0;
	if (longueur > 0)
	{	
		while (src[i] && i < (longueur -1))
		{	
		dst[i] = src[i];
		i++;
		}
	dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}	
