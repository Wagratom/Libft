/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_int_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 15:56:14 by wwallas-          #+#    #+#             */
/*   Updated: 2022/09/17 11:58:23 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_is_int_nbr(char *nbr)
{
	char	*conversion;
	t_bool	failure;

	failure = TRUE;
	conversion = ft_itoa(ft_atoi(nbr));
	if (ft_strncmp(conversion, nbr, ft_strlen(nbr) + 1))
		failure = FALSE;
	free(conversion);
	return (failure);
}
