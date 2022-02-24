/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main05.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 17:17:41 by afaby             #+#    #+#             */
/*   Updated: 2022/02/21 16:43:17 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	t[50] = "Test ";
	char	t2[] = "123";
	unsigned int	size = 2;

	printf("Valeur de ft_strcat(\"%s\", \"%s\") : %s\n\n", t, t2, ft_strlcat(t, t2, size));
}
