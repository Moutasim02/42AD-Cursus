/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 20:38:48 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/08/18 20:52:44 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*h;
	t_list	*tmp;

	h = NULL;
	if (lst && f)
	{
		tmp = lst;
		h = ft_lstnew(f(tmp->content));
		if (h == 0)
			return (0);
		tmp = tmp->next;
		while (tmp)
		{
			if (!ft_lstnew(f(tmp->content)))
			{
				ft_lstclear(&h, del);
				h = NULL;
				break ;
			}
			ft_lstadd_back(&h, ft_lstnew(f(tmp->content)));
			tmp = tmp->next;
		}
	}
	return (h);
}
