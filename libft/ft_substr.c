/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:13:06 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/08/16 20:58:25 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	i = 0;
	if (s == NULL)
		return (NULL);
	substring = (char *)malloc(sizeof(*s) * (len) + 1);
	if (!substring)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (i < len)
		substring[i++] = s[start++];
	substring[i] = '\0';
	return (substring);
}
