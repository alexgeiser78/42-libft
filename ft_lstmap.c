/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ageiser <ageiser@student.42barcelo>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:48:35 by ageiser           #+#    #+#             */
/*   Updated: 2022/10/06 14:40:31 by ageiser          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*tmp;

	ret = 0;
	while (lst)
	{
			tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		ft_lstadd_back(&ret, tmp);
		lst = lst->next;
	}
	return (ret);
}
//ligne 17 et 18 creation de deux pointeurs
//ligne 23 au pointeur temp on donne un element qui contient la fonction
//ligne 24 si le pointeur ne contient rien, on efface l'adresse de (ret)
//ainsi qe la fonction (del)
//ligne 29 on ajoute un element (tmp) a ret
//ligne 30 on incremente
