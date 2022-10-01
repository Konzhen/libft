/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbutte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:30:55 by jbutte            #+#    #+#             */
/*   Updated: 2022/09/30 17:28:22 by jbutte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char		*tmpdest;
	const unsigned char	*tmpsrc;
	int	i;

	tmpdest = (unsigned char *) dest;
	tmpsrc = (const unsigned char *) src;
	i = 0;
	while (size--)
	{
		tmpdest[i] = tmpsrc[i];
		i++;
	}
	return (dest);
}
