/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbutte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 15:59:33 by jbutte            #+#    #+#             */
/*   Updated: 2022/09/30 16:09:33 by jbutte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmp1;
	unsigned char	*tmp2;
	int	i;

	tmp1 = (unsigned char *) s1;
	tmp2 = (unsigned char *) s2;
	i = 0;
	while ((tmp1[i] && tmp2[i]) && n--)
	{
		if(tmp1[i] != tmp2[i])
			return(tmp1[i] - tmp2[i]);
		i++;
	}
	return (0) ;
}
