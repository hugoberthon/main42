/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:17:41 by afaby             #+#    #+#             */
/*   Updated: 2022/02/21 10:42:28 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*t;
	char	*t2;
	char	*t3;

	t = "Test123";
	t2 = "123Test";
	t3 = "Test123test";

	printf("Valeur de ft_strcmp(\"%s\", \"%s\") : %d\n", t, t, ft_strcmp(t, t));
	printf("Valeur de ft_strcmp(\"%s\", \"%s\") : %d\n", t3, t, ft_strcmp(t3, t));
	printf("Valeur de ft_strcmp(\"%s\", \"%s\") : %d\n", t, t3, ft_strcmp(t, t3));
	printf("Valeur de ft_strcmp(\"%s\", \"%s\") : %d\n\n", t, t2, ft_strcmp(t, t2));

	printf("Valeur de strcmp(\"%s\", \"%s\") : %d\n", t, t, strcmp(t, t));
	printf("Valeur de strcmp(\"%s\", \"%s\") : %d\n", t3, t, strcmp(t3, t));
	printf("Valeur de strcmp(\"%s\", \"%s\") : %d\n", t, t3, strcmp(t, t3));
	printf("Valeur de strcmp(\"%s\", \"%s\") : %d\n", t, t2, strcmp(t, t2));
}
