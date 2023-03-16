/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 17:01:53 by cristian          #+#    #+#             */
/*   Updated: 2023/02/23 17:50:23 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*buffer;

	i = 0;
	if (max <= min)
	{
		*range = 0;
		return (0);
	}
	buffer = (malloc((max - min) * (sizeof (int))));
	if (*range == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	size = max - min;
	while (i < size)
	{
		buffer[i] = min + i;
		i++;
	}
	return (size);
}

/*int	main(void)
{
	int	*range;
	int n;
	int	i;
	
	i = 0;
	n =	ft_ultimate_range(&range, 1, 30);
	while (i < n)
	{
		printf("%i\n", range[i]);
		i++;
	}
}*/
