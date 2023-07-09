/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:47:49 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/07/09 22:51:29 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *			ft_memmove(void *dst, const void *src, size_t len) {
	int i;
	char *d;
	const char *s;
	
	i = 0;
	
	if(len == 0)
		return dst;
		
	if (dst == 0 && src == 0)
		return NULL;
	
    d = dst;
	s = src;
	
    if (src > dst) 
        for (size_t i = 0; i < len; i++)
            d[i] = s[i];
    else 
        for (size_t i = len; i > 0; i--)
            d[i - 1] = s[i - 1];
    
    return dst;
}