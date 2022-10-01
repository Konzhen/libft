/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbutte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:10:33 by jbutte            #+#    #+#             */
/*   Updated: 2022/09/30 10:41:55 by jbutte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

int	strncmp(const char *first, const char *second size_t length)
{
	int	i;

	i = 0;
	while ((first[i] || second[i]) && length != 0)
	{
		if (first[i] != second[i])
			return (first[i] - second[i]);
		i++;
		length--;
	}
	return (0);
}
