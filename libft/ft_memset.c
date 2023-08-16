/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 15:59:27 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/08/16 20:50:17 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		*(unsigned char *)(dest + i++) = (unsigned char)c;
	}
	return (dest);
}
