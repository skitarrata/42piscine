/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:54:45 by svalenti          #+#    #+#             */
/*   Updated: 2020/11/12 13:55:36 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int		ft_ischarset(char str, char *charset)
{
	int j;

	j = 0;
	while (charset[j])
	{
		if (str == charset[j])
			return (1);
		j++;
	}
	return (0);
}

int		ft_taille(char *str, char *charset)
{
	int k;

	k = 0;
	while (*str)
	{
		if (!ft_ischarset(*str, charset))
		{
			k++;
			while (*str && !ft_ischarset(*str, charset))
				str++;
		}
		str++;
	}
	return (k);
}

void	ft_write(char *str, char *dest, char *from)
{
	while (from < str)
		*(dest++) = *(from++);
	*dest = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	char	*from;
	int		i;

	i = 0;
	dest = malloc(sizeof(char*) * (ft_taille(str, charset) + 1));
	if (!str && !charset)
	{
		dest[0] = 0;
		return (dest);
	}
	while (*str)
	{
		if (!ft_ischarset(*str, charset))
		{
			from = str;
			while (*str && !(ft_ischarset(*str, charset)))
				str++;
			dest[i] = malloc(sizeof(char *) * (str - from + 1));
			ft_write(str, dest[i++], from);
		}
		str++;
	}
	dest[i] = 0;
	return (dest);
}
