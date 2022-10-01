/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbutte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:52:46 by jbutte            #+#    #+#             */
/*   Updated: 2022/09/30 15:58:09 by jbutte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char*) s;
	while(n-- && s[i])
	{
		if(s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
