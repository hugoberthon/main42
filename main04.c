/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:17:25 by afaby             #+#    #+#             */
/*   Updated: 2022/02/20 15:18:21 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	test[] = "ft_str_is_lowercase";
	char	test2[] = "ftstrislowercase";

	printf("Valeur avec test[] : %d\n", ft_str_is_lowercase(test));
	printf("Valeur avec test2[] : %d\n", ft_str_is_lowercase(test2));
}

