/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:32:02 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/07/09 23:54:12 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int nbr = 0;

    while ((str[i] >= 9 && str[i]<= 13) || str[i] == 32)
        i++;
		
 	if (str[i] == '-')
            sign = -1;
    if (str[i] == '-' || str[i] == '+')
    {
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        nbr = (nbr * 10) + (str[i] - '0');
        i++;
    }	

	if (nbr > INT_MAX)
	{
		
	} 
	
    return ((int)(nbr * sign));
}

// int main(int ac, char **av)
// {
// 	printf("my atoi		%d\n", ft_atoi(av[1]));
// 	printf("original	%d\n", atoi(av[1]));
// }