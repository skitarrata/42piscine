/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:21:58 by svalenti          #+#    #+#             */
/*   Updated: 2020/11/05 15:41:44 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dst, char *src)
{
	int i;

	i = 0;
	while (*src)
		*(dst++) = *(src++);
	return (dst);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*ret;
	char		*t;
	long long	strs_len;
	int			i;

	if (!size)
	{
		ret = (char*)malloc(1);
		ret[0] = 0;
		return (ret);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	ret = (char*)malloc(strs_len + (size - 1) * ft_strlen(sep) + 1);
	t = ft_strcat(ret, strs[0]);
	i = 1;
	while (i < size)
	{
		t = ft_strcat(t, sep);
		t = ft_strcat(t, strs[i++]);
	}
	*t = 0;
	return (ret);
}
