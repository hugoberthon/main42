/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 11:42:39 by afaby             #+#    #+#             */
/*   Updated: 2022/02/24 16:29:17 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Usage : ./strstr <str> <to_find>\n");
		return (0);
	}
	printf("Valeur de ft_strstr(\"%s\", \"%s\") : %s\n\n", argv[1], argv[2], ft_strstr(argv[1], argv[2]));
	printf("Valeur de strstr(\"%s\", \"%s\") : %s\n", argv[1], argv[2], strstr(argv[1], argv[2]));
}
