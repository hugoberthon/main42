/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:17:41 by afaby             #+#    #+#             */
/*   Updated: 2022/02/24 16:08:10 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	*t;
	char	*t2;
	char	*t3;
	unsigned int		size;

	t = "Test123";
	t2 = "123Test";
	t3 = "Test123test";
	size = 0;

	printf("Valeur de ft_strncmp(\"%s\", \"%s\", %d) : %d\n", t, t, size, ft_strncmp(t, t, size));
	printf("Valeur de ft_strncmp(\"%s\", \"%s\", %d) : %d\n", t3, t, size, ft_strncmp(t3, t, size));
	printf("Valeur de ft_strncmp(\"%s\", \"%s\", %d) : %d\n", t, t3, size, ft_strncmp(t, t3, size));
	printf("Valeur de ft_strncmp(\"%s\", \"%s\", %d) : %d\n\n", t, t2, size, ft_strncmp(t, t2, size));

	printf("Valeur de strncmp(\"%s\", \"%s\", %d) : %d\n", t, t, size, strncmp(t, t, size));
	printf("Valeur de strncmp(\"%s\", \"%s\", %d) : %d\n", t3, t, size, strncmp(t3, t, size));
	printf("Valeur de strncmp(\"%s\", \"%s\", %d) : %d\n", t, t3, size, strncmp(t, t3, size));
	printf("Valeur de strncmp(\"%s\", \"%s\", %d) : %d\n\n", t, t2, size, strncmp(t, t2, size));
}
