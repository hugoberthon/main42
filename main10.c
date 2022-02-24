/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:53:27 by afaby             #+#    #+#             */
/*   Updated: 2022/02/20 16:59:32 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	test[] = "Test strlcpy";
	unsigned int		size = 8;
	unsigned int	re;
	char	dest[size];
	
	printf("Valeur de test avant : |%s|\nValeur de dest avant : |%s|\n\n", test, dest);
	re = ft_strlcpy(dest, test, size);
	printf("Valeur de test après : |%s|\nValeur de dest après : |%s|\n\n", test, dest);
	printf("Valeur retournée : %d\n", re);
}
