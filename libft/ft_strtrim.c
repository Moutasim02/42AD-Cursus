/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:07:45 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/08/16 20:58:23 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	size_t	i;
	char	*str;

	first = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[first] && ft_char_in_set(s1[first], set))
		first++;
	last = ft_strlen(s1);
	while (last > first && ft_char_in_set(s1[last - 1], set))
		last--;
	str = (char *)malloc(sizeof(*s1) * (last - first + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (first < last)
		str[i++] = s1[first++];
	str[i] = '\0';
	return (str);
}
