/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:31:51 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/07/06 16:36:21 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

void * ft_memcpy(void* dest, const void* src, size_t n) {
	size_t i;
	
	if (!dest)
		return (NULL);
		
	i = 0;
	while (i < n)
	{
		*(unsigned char*) (dest + i) = *(unsigned char*) (src + i);
		i++;
	}
	return dest;
}