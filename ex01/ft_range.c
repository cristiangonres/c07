/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 16:48:34 by cristian          #+#    #+#             */
/*   Updated: 2023/02/23 17:56:58 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (max < min)
	{
		printf("max; %i\n", max);
		printf("min: %i\n", min);
		return (0);
	}
	ptr = malloc(max - min);
	if (ptr == NULL)
		return (NULL);
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	int	*an;
	int n;	

	n = 0;
	an = ft_range(1, 30);
	while (an[n] != '\0')
	{
		printf("%i", an[n]);
		n++;
	}
}*/
