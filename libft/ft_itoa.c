/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-ayou <mel-ayou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:12:32 by mel-ayou          #+#    #+#             */
/*   Updated: 2023/08/16 20:43:44 by mel-ayou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long int	ft_absoulte_value(long int nbr)
{
	if (nbr < 0)
		return (-nbr);
	return (nbr);
}

int	ft_nbr_length(long int nbr)
{
	int	len;

	if (nbr <= 0)
		len = 1;
	else
		len = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*c;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = ft_nbr_length(n);
	c = (char *)malloc(sizeof(char) * len + 1);
	if (c == NULL)
		return (0);
	c[len] = '\0';
	len--;
	while (len >= 0)
	{
		c[len] = '0' + ft_absoulte_value(n % 10);
		n = ft_absoulte_value(n / 10);
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}
