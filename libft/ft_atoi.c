/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:32:02 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/07/11 20:13:30 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    long nbr = 0;
		
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
		
 	if (str[i] == '-')
		sign = -1;
    if (str[i] == '+' || str[i] == '-')
		i++;
	
    while (str[i] >= '0' && str[i] <= '9')
    {
		if ((nbr > LONG_MAX / 10) || (nbr == LONG_MAX / 10 && (str[i] - '0') > LONG_MAX % 10)) {
            if (sign == 1) 
                return -1;
            else
                return 0;
        }
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
    }	
    return ((int)(nbr * sign));
}