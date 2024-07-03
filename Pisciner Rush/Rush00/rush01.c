/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruzua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 18:35:00 by ruzua             #+#    #+#             */
/*   Updated: 2024/06/16 18:35:12 by ruzua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	print_linha(int x, int esquerda, int meio, int direita)
{
	int	espaco;

	espaco = 1;
	if (x > 0)
	{
		ft_putchar(esquerda);
	}
	while (espaco < (x - 1))
	{
		ft_putchar(meio);
		espaco++;
	}
	if (x > 1)
	{
		ft_putchar(direita);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	espaco;

	espaco = 1;
	if (x > 0 && y > 0)
	{
		print_linha(x, '/', '*', '\\');
	}
	while (espaco < y - 1 && x > 0)
	{
		print_linha(x, '*', ' ', '*');
		espaco++;
	}
	if (y > 1 && x > 0)
	{
		print_linha(x, '\\', '*', '/');
	}
}
