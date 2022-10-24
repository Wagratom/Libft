/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wwallas- <wwallas-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:36:35 by wwallas-          #+#    #+#             */
/*   Updated: 2022/10/24 17:58:27 by wwallas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned char	*src;
	size_t			size;

	src = (unsigned char *)str;
	size = ft_strlen(str) + 1;
	while (size--)
	{
		if (src[size] == (unsigned char )c)
			return ((char *)&src[size]);
	}
	return (NULL);
}
