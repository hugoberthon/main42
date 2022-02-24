/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main07.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:21:56 by afaby             #+#    #+#             */
/*   Updated: 2022/02/20 15:23:52 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strupcase(char *str);

int	main(void)
{
	char	test[] = "ft_strupcase";

	printf("Valeur avant : %s\n", test);
	ft_strupcase(test);
	printf("Valeur apres : %s\n", test);
}

