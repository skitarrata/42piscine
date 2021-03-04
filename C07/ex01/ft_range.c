/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svalenti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 11:48:24 by svalenti          #+#    #+#             */
/*   Updated: 2020/11/05 15:17:13 by svalenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *arr;
	int n;
	int m;

	n = 0;
	m = min;
	if (min >= max)
		return (0);
	if (!(arr = (int *)malloc(sizeof(int) * (max - min))))
		return (0);
	while (n < (max - min))
		arr[n++] = m++;
	return (arr);
}
