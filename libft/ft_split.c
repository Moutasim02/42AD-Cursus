/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutasim <moutasim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:50:16 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/07/19 04:00:49 by moutasim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char **ft_split(char const *s, char c)
// {
// 	size_t i;
// 	size_t j;
// 	size_t len;
// 	char** arr;
// 	char* temp_str;
	
// 	i = 0;
// 	j = 0;
// 	temp_str = ft_strdup("");
// 	arr = (char **)malloc(sizeof(char *));
	
// 	while (s[i])
// 	{
// 		if (s[i] != c)
// 		{	
// 			ft_strlcat(temp_str, s[i], 1);
// 			i++;
// 		} else {
// 			len = ft_strlen(temp_str);
// 			*arr[j] = (char*) malloc(sizeof(*temp_str) * (len) + 1);
// 			ft_strlcpy(*arr[j], temp_str, sizeof(*arr[j]));
// 			i++;
// 			j++;
// 			temp_str = NULL;
// 			temp_str = ft_strdup("");
// 		}
// 	}
// 	return arr;
// }