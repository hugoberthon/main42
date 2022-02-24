/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:16:00 by afaby             #+#    #+#             */
/*   Updated: 2022/02/20 15:16:56 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	test[] = "123456test45numeric";
	char	test2[] = "1234567890";

	printf("Valeur avec test[] : %d\n", ft_str_is_numeric(test));
	printf("Valeur avec test2[] : %d\n", ft_str_is_numeric(test2));
}
