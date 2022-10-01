/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbutte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:25:46 by jbutte            #+#    #+#             */
/*   Updated: 2022/10/01 13:44:43 by jbutte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
		return (NULL);
	while (big[i] && i < len)
	{
		while ((little[j] == big[i] && i < len) || little[j] == '\0')
		{
			if(little[j] == '\0')
				return ((char *)&big[i - j]);
			i++;
			j++;
		}
		i++;
		j = 0;
	}
	return (NULL);
}
