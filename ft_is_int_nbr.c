/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_int_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:56:14 by wwallas-          #+#    #+#             */
/*   Updated: 2022/09/17 22:50:05 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	*convert_number(char **nbr)
{
	if (nbr == NULL || *nbr == NULL)
		return (NULL);
	if (*nbr[0] == '+')
		(*nbr) = (*nbr + 1);
	return (ft_itoa(ft_atoi(*nbr)));
}

t_bool	ft_is_int_nbr(char *nbr)
{
	char	*nbr_conv;
	t_bool	failure;

	failure = TRUE;
	nbr_conv = convert_number(&nbr);
	if (ft_str_eq(nbr_conv, nbr) == FALSE)
		failure = FALSE;
	free(nbr_conv);
	return (failure);
}
