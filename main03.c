/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:17:41 by afaby             #+#    #+#             */
/*   Updated: 2022/02/21 11:41:23 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	t[50] = "Test ";
	char	t2[] = "123";
	char	t3[50] = "Test ";
	char	t4[] = "123";
	unsigned int	size = 1;

	printf("Valeur de ft_strcat(\"Test \", \"%s\", %d) : %s\n\n", t2, size, ft_strncat(t, t2, size));

	printf("Valeur de strcat(\"Test \", \"%s\", %d) : %s\n", t4, size, strncat(t3, t4, size));
}
