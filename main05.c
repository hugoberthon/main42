/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:19:09 by afaby             #+#    #+#             */
/*   Updated: 2022/02/20 15:20:04 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	test[] = "ft_str_is_uppercase";
	char	test2[] = "FTSTRISUPPERCASE";

	printf("Valeur avec test[] : %d\n", ft_str_is_uppercase(test));
	printf("Valeur avec test2[] : %d\n", ft_str_is_uppercase(test2));
}

