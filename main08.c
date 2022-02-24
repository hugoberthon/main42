/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:24:18 by afaby             #+#    #+#             */
/*   Updated: 2022/02/20 15:24:58 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strlowcase(char *str);


int	main(void)
{
	char	test[] = "FT_STRLOWCASE";

	printf("Valeur avant : %s\n", test);
	ft_strlowcase(test);
	printf("Valeur apres : %s\n", test);
}


