/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:17:41 by afaby             #+#    #+#             */
/*   Updated: 2022/02/21 11:35:56 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	t[50] = "Test ";
	char	t2[] = "123";
	char	t3[50] = "Test ";
	char	t4[] = "123";

	printf("Valeur de ft_strcat(\"Test \", \"%s\") : %s\n\n", t2, ft_strcat(t, t2));

	printf("Valeur de strcat(\"Test \", \"%s\") : %s\n", t4, strcat(t3, t4));
}
