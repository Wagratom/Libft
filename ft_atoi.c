/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:16:55 by wwallas-          #+#    #+#             */
/*   Updated: 2022/05/31 16:16:56 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sig;

	result = 0;
	sig = 1;
	while ((*nptr >= 9 && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			sig = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = (*nptr - 48) + (result * 10);
		nptr++;
	}
	result *= sig;
	return (result);
}
