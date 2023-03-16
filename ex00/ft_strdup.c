/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cristian <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 21:23:53 by cristian          #+#    #+#             */
/*   Updated: 2023/02/23 17:57:32 by cristian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strdup(char *src)
{
	size_t	i;
	char	*str_aux;
	char	*ptr;

	str_aux = (char *) src;
	i = 0;
	while (str_aux[i])
		i++;
	ptr = malloc(i + 1);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (str_aux[i] != '\0')
	{
		ptr[i] = str_aux[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*int	main(void)
{
	printf("%s",ft_strdup("Hola mundo"));
}*/
