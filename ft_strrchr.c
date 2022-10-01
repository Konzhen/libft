/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbutte <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:42:03 by jbutte            #+#    #+#             */
/*   Updated: 2022/09/30 10:48:19 by jbutte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strrchr(const char *string, int srcChar)
{
	int	i;

	i = 0;
	while (string++)
		i++;
	while (string--)
	{
		if (srcChar == string[i])
			return (&(string[i]));
		i--;
	}
	return (NULL);
}
