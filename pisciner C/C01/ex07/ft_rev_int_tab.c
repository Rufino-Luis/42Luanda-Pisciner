/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruzua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:11:13 by ruzua             #+#    #+#             */
/*   Updated: 2024/06/18 13:11:22 by ruzua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	inicio;
	int	fim;

	inicio = 0;
	fim = size - 1;
	while (inicio < fim)
	{
		aux = tab[inicio];
		tab[inicio] = tab[fim];
		tab[fim] = aux;
		inicio++;
		fim--;
	}	
}
