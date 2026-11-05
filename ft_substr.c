/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbutte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:43:39 by jbutte            #+#    #+#             */
/*   Updated: 2022/10/13 16:17:44 by jbutte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		size;
	size_t		i;
	char		*dest;
	char		*str;

	size = 0;
	i = 0;
	if (!s)
		return (NULL);
	if (len == 0 || start > ft_strlen(s))
	{
		str = ft_strdup("");
		return (str);
	}
	while (size < len && s[start + size] != '\0')
		size++;
	dest = malloc(size + 1);
	if (!dest)
		return (NULL);
	while (s[start] != '\0' && i < len)
		dest[i++] = s[start++];
	dest[i] = '\0';
	return (dest);
}
