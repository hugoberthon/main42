/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaby <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:43:07 by afaby             #+#    #+#             */
/*   Updated: 2022/02/21 13:18:47 by afaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "Test for ft_strcpy.c";
	char	dest[20] = "";

	printf("Src avant : %s\nDest avant : %s\n\n", src, dest);
	ft_strcpy(dest, src);
	printf("Src après : %s\nDest après : %s\n\n", src, dest);
}
