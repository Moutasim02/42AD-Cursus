/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:29:08 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/07/09 21:18:39 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *		ft_calloc(size_t count, size_t size)
{
	void* ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return NULL;

    ft_bzero(ptr, count * size);
	
	return ptr;
}

