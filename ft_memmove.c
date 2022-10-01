/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbutte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:02:46 by jbutte            #+#    #+#             */
/*   Updated: 2022/10/01 10:59:51 by jbutte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*tmpdest;
	const unsigned char	*tmpsrc;
	int	i;

	tmpdest = (unsigned char *) dest;
	tmpsrc = (const unsigned char *) src;
	i = 0;
	if (dest > src)
	{
		while (n--)
			tmpdest[n] = tmpsrc[n];
		return (dest);
	}
	else
	{
		while(i < n)
		{
			tmpdest[i] = tmpsrc[i];
			i++;
		}
		return (dest);
	}
	return (NULL);
}
