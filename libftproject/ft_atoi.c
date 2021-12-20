/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yghari <yghari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 18:21:44 by yghari            #+#    #+#             */
/*   Updated: 2021/11/24 14:40:45 by yghari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include <unistd.h>
#include<stdio.h>
#include<stdlib.h> 

int	ft_atoi(const char *str)
{
	size_t		i;
	size_t		nb;
	int			signe;

	i = 0;
	nb = 0;
	signe = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
			i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		signe = -1;
		i++;
	}
	while (str[i] >= '0' && str [i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (signe * nb);
}
