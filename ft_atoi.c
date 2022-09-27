/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageiser <ageiser@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:50:06 by ageiser           #+#    #+#             */
/*   Updated: 2022/09/26 14:50:57 by ageiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int negative;
	unsigned long long result;

	i = 0;
	negative = 0;
	result = 0;
	if (!str)
		return (0);
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
	i++;
	if (str[i] == '-')
		negative = -1;
	else 
		negative = 1;
	if (str[i] == '-' || str[i] == '+')
	i++;
while (str[i] >= '0' && str[i] <= '9')
{
	if (result > __LONG_LONG_MAX__)
	return(negative == -1 ? 0 : -1);
result *= 10;
result += (str[i] - '0');
i++;
}
return (result * negative);
}
