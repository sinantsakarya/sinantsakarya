/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakarya <ssakarya@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:12:38 by ssakarya          #+#    #+#             */
/*   Updated: 2022/12/19 19:00:56 by ssakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
// #include <stdio.h>
// int	main()
// {
// 	char a[] = "ahmet";
// 	ft_calloc(3,2);
// }
// Malloc fonksiyonu ile bellekte alan açıp 
// ft_bzero fonksiyonu ile null atayarak döndürüyoruz.