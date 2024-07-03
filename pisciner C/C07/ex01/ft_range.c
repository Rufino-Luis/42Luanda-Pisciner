/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruzua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 15:55:52 by ruzua             #+#    #+#             */
/*   Updated: 2024/07/02 15:55:55 by ruzua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*result;

	if (min >= max)
	{
		return (0);
	}
	i = max - min;
	result = (int *)malloc(sizeof(int) * (i));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (max > min)
	{
		result[i] = min;
		min++;
		i++;
	}
	return (result);
}
