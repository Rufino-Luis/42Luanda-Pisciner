/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruzua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 10:09:59 by ruzua             #+#    #+#             */
/*   Updated: 2024/06/28 10:10:01 by ruzua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	primo(int nb)
{
	int	num;
	int	cont;

	num = nb;
	cont = 0;
	while (nb > 0)
	{
		if (num % nb == 0)
		{
			cont++;
		}
		nb --;
	}
	if (cont == 2)
		return (1);
	else
		return (0);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (primo(nb) == 1)
			return (nb);
		nb++;
	}
	return (nb);
}
