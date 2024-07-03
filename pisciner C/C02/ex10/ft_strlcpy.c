/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruzua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 10:08:02 by ruzua             #+#    #+#             */
/*   Updated: 2024/06/21 10:08:08 by ruzua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	cont;

	cont = 0;
	while (src[cont] != '\0' && cont < size)
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (cont < size)
	{
		dest[cont] = '\0';
	}
	return (cont);
}
