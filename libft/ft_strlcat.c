/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 15:48:52 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/07/09 19:38:27 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize) {
	size_t i;
	size_t j;
	size_t dest_length;
	size_t src_length;

	i = 0;
	src_length = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
		return src_length;

	dest_length = ft_strlen(dst);
	j = dest_length;

	if (dest_length >= dstsize)
		return (src_length + dstsize);

	if (dest_length < dstsize - 1 && dstsize > 0) {
		while (src[i] && i < dstsize - dest_length - 1) {
			dst[j] = src[i];
			i++;
			j++;
		}
		dst[j] = '\0';
	}
	return (dest_length + src_length);
}
