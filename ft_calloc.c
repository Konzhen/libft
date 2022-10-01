/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbutte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:56:20 by jbutte            #+#    #+#             */
/*   Updated: 2022/10/01 17:36:40 by jbutte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

void	*calloc(size_t nmemb, size_t size)
{
	char	*tab;
	tab	= malloc(sizeof(size) * nmemb);
	return (tab);
}
