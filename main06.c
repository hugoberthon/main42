/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:20:29 by afaby             #+#    #+#             */
/*   Updated: 2022/02/20 15:21:09 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	test[] = "ft_str_is_printable";
	char	test2[] = "ft_str_is_printable\n";

	printf("Valeur avec test[] : %d\n", ft_str_is_printable(test));
	printf("Valeur avec test2[] : %d\n", ft_str_is_printable(test2));
}

