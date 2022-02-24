/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main09.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:25:45 by afaby             #+#    #+#             */
/*   Updated: 2022/02/20 15:26:48 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_strcapitalize(char *str);

int	main(void)
{
	char	test[] = "salut, COMMENT tu vas ? 42mots quarante-DEUx; cinquante+eT+un";

	printf("Valeur avant : %s\n", test);
	ft_strcapitalize(test);
	printf("Valeur apres : %s\n", test);
}


