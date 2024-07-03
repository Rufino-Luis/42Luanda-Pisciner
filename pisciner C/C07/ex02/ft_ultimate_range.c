/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruzua <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:14:11 by ruzua             #+#    #+#             */
/*   Updated: 2024/07/01 15:14:18 by ruzua            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(size * sizeof(int));
	if (*range == NULL)
	{
		return (0);
	}
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
int main()
{
    int *vet;
    int tamanho = ft_ultimate_range(&vet, 3, 7);
    
    if (tamanho > 0)
    {
   	int i = 0;
        printf("Array criado com sucesso com tamanho %d:\n", tamanho);
       while (i < tamanho)
        {
            printf("%d ", vet[i]);
            i++;
        }
        printf("\n");
        free(vet);
    }
    else
    {
        printf("Falha ao criar o array.\n");
    }
    return 0;
}*/
