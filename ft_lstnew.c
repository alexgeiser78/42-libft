/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageiser <ageiser@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:41:07 by ageiser           #+#    #+#             */
/*   Updated: 2022/10/05 12:49:22 by ageiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*pleiades;

	pleiades = (t_list *)malloc(sizeof(*pleiades));
	if (!pleiades)
		return (NULL);
	pleiades->content = content;
	pleiades->next = NULL;
	return (pleiades);
}	
