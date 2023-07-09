/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 18:34:05 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/07/08 18:35:20 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *			ft_strdup(const char *s1)
{
	char	*new_string;
	int		i;

	i = 0;
	new_string = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!new_string)
		return (NULL);
	while (*s1)
		new_string[i++] = *s1++;
	new_string[i] = '\0';
	return (new_string);
}
