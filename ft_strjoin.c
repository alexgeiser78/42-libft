/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageiser <ageiser@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:12:27 by ageiser           #+#    #+#             */
/*   Updated: 2022/09/29 15:03:45 by ageiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
char *soutput;
size_t i;
size_t j;

i = 0;
j = 0;
soutput = (char *)malloc(sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) +1));
			if (!soutput)
			return (NULL);
while (s1[i])
{
soutput[j] = s1[i];
j++;
i++;

}
i = 0;
while (s2[i])
{
soutput[j] = s2[i]; 
i++;
j++;
}
soutput[j] = '\0';
return (soutput);
}
