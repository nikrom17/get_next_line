/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nroman <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 15:25:07 by nroman            #+#    #+#             */
/*   Updated: 2018/02/24 09:24:28 by nroman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	size_t	i;
	char	*new;

	new = (char *)malloc(sizeof(char) * size + 1);
	if (new)
	{
		i = 0;
		while (i < (size + 1))
			new[i++] = 0;
		return (new);
	}
	return (NULL);
}
