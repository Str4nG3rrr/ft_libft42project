/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yghari <yghari@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:29:53 by yghari            #+#    #+#             */
/*   Updated: 2021/11/24 17:57:04 by yghari           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((i < n - 1)
		&& (*((unsigned char *)s1 + i) && *((unsigned char *)s2 + i))
		&& (*((unsigned char *)s1 + i) == *((unsigned char *)s2 + i)))
			i++;
	return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}
