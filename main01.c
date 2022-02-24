/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:53:55 by afaby             #+#    #+#             */
/*   Updated: 2022/02/20 14:55:04 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[] = "Test for ft_strcpy.c";
	char	dest[] = "00000000000000000000";
	unsigned int	size = 12;

	printf("Src avant : %s\nDest avant : %s\n\n", src, dest);
	ft_strncpy(dest, src, size);
	printf("Src après : %s\nDest après : %s\n\n", src, dest);
}

