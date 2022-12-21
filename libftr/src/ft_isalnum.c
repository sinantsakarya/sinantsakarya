/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssakarya <ssakarya@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 13:24:24 by ssakarya          #+#    #+#             */
/*   Updated: 2022/12/19 15:30:40 by ssakarya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return(1);
	return(0);
}
/*
#include <stdio.h>

int main()
{
	printf("%d", ft_isalnum('s'));
}
*/