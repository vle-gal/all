/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-gal <vle-gal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 19:09:12 by vle-gal           #+#    #+#             */
/*   Updated: 2018/01/18 15:41:36 by vle-gal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int main(void)
{
  // ft_printf("% 10.5d\n", 4242);
  // printf("% 10.5d", 4242);
	// ft_printf("%d\n", 2147);
	// printf("--%20d\n", 2147483);
	// ft_printf("%d\n", -2147483648);
	// ft_printf("%10xlol\n", 123);
	// ft_printf("%d\n", -123);
	// printf("%s\n");
	// if (printf("%c\n", 'a') == ft_printf("%c\n", 'a'))
	// 	printf("%d\n", 1);
	// int i;
	// i = -3647;
	// while ((printf("%zd\n", i) == ft_printf("%zd\n", i)) && i < 5)
	// 	{
	// 	i++;
	// 	}
	// 	printf("\n");
	// 	if (printf("%zd", i) != ft_printf("%zd", i))
	// 		printf("%zd", i);
	// ft_printf("%zd\n", -1);
	// printf("%zd\n", -1);
	// if (ft_printf("%zd\n", -1) != printf("%zd\n", -1))
	// 	printf("%s", "faux");
	printf("--------\n");
  // ft_printf("%1.2s", "ds");
	printf("\n--------\n");
  printf("\n");
	env LC_ALL=en_US.UTF-8 printf("%'3.f\n", 151563135);
  printf("%'10.4d %'f|", 56440385, 561531.65);
  printf("%'10.3lf \n", 13000.26);
  printf("%'.3d\n", 123456);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("1s%0d\n", 42);
  // printf("%$%1s\n");
  // printf("%L%1s\n", 42);
  // printf("%'%1s\n", 42);
  // printf("%%1s\n", 42);
	return(0);
}
