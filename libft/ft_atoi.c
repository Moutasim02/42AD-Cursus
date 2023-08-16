/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 21:32:02 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/08/16 20:19:05 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	update_vars(const char *str, int *i, int *sign)
{
	while ((str[(*i)] >= 9 && str[(*i)] <= 13) || str[(*i)] == 32)
		(*i)++;
	if (str[(*i)] == '-')
		(*sign) = -1;
	if (str[(*i)] == '+' || str[(*i)] == '-')
		(*i)++;
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	update_vars(str, &i, &sign);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((nbr > LONG_MAX / 10) || (nbr == LONG_MAX / 10 && (str[i]
					- '0') > LONG_MAX % 10))
		{
			if (sign == 1)
				return (-1);
			else
				return (0);
		}
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return ((int)(nbr * sign));
}
