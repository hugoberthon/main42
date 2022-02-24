/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:06:15 by afaby             #+#    #+#             */
/*   Updated: 2022/02/20 15:15:40 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	test[] = "ft_str_is_alpha";
	char	test2[] = "ftstrisaplhA";

	printf("Valeur avec test[] : %d\n", ft_str_is_alpha(test));
	printf("Valeur avec test2[] : %d\n", ft_str_is_alpha(test2));
}
