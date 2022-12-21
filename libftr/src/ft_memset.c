/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakarya <ssakarya@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 01:38:06 by ssakarya          #+#    #+#             */
/*   Updated: 2022/12/21 14:46:23 by ssakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
    char *a;
    a = (char *)b;
	size_t	i;

	i = 0;
	while (i < len)
	{
        a[i] = c;	
    	i++;
	}
	return (a);
}
// int main (void)
// {
//     char a[] = "sinannn";
//     printf("%s", (char *)ft_memset(a, 'd', 3));
// }
