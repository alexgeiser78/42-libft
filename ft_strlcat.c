/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageiser <ageiser@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:01:35 by ageiser           #+#    #+#             */
/*   Updated: 2022/09/21 13:28:38 by ageiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	i++;
	if (dstsize < i)
	{
		while (src[j])
		j++;
		return (dstsize + j);
	}
	while (dstsize > 0 && i < dstsize -1 && src[j])
		dst[i++] = src[j++];
		dst[i] = '\0';
	while (src[j++])
				i++;
	return (i);
}
