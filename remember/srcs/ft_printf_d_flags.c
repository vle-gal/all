/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d_flags.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymou <anonymou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/04 11:35:02 by anonymou          #+#    #+#             */
/*   Updated: 2017/11/18 17:54:10 by vle-gal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char* ft_dstrl(long d, t_struct * para)
{
	char* dstr;
	int len;
	long t_d;
	int less;

	less = 0;
	d < 0 ? less = 1 && (d = d * -1) : 0;
	len = 0;
	d == -2147483648? (t_d = 2147483647) && (d = 2147483647) && (para->d++) : (t_d = d);
	while (t_d > 9)
	{
		t_d /= 10;
		len++;
	}
	dstr = ft_strnew((size_t)len + 1);
	while (len > 0)
	{
		less == 1 ? dstr[len + 1] = (d % 10) + '0': (dstr[len] = (d % 10) + '0');
		d /= 10;
		len--;
	}
	less == 1 ? dstr [len + 1] = d + '0' : (dstr[len] = d + '0');
	less == 1 ? dstr [len] = '-' : 0;
	para->d == 1 ? dstr[10] = '8': 0;
	return  (dstr);
}
char* ft_dstrh(short d, t_struct * para)
{
	char* dstr;
	int len;
	int t_d;
	int less;

	less = 0;
	d < 0 ? less = 1 && (d = d * -1) : 0;
	// d < 0 ? d = d * -1 : 0;
	len = 0;
	d == -32768? (t_d = 32767) && (d = 32767) && (para->d++) : (t_d = d);
	less == 1 ? len++ : 0;
	t_d = d;
	while (t_d > 9)
	{
		t_d /= 10;
		len++;
	}
	dstr = ft_strnew((size_t)len);
	less == 1 ? len-- : 0;
	while (len > 0)
	{
		less == 1 ? dstr[len + 1] = (d % 10) + '0': (dstr[len] = (d % 10) + '0');
		d /= 10;
		len--;
	}
	less == 1 ? dstr [len + 1] = d + '0' : (dstr[len] = d + '0');
	less == 1 ? dstr [len] = '-' : 0;
	para->d == 1 ? dstr[5] = '8': 0;
	return  (dstr);
}

char* ft_dstrll(long long d, t_struct * para)
{
	char* dstr;
	int len;
	long long t_d;
	int less;

	less = 0;
	d < 0 ? less = 1 && (d = d * -1) : 0;
	(d == -9223372036854775807 - 1)	? (t_d = 9223372036854775807) && (d = 9223372036854775807) && (para->d++) : (t_d = d);
	// d < 0 ? d = d * -1 : 0;
	len = 0;
	less == 1 ? len++ : 0;
	t_d = d;
	while (t_d > 9)
	{
		t_d /= 10;
		len++;
	}
	dstr = ft_strnew((size_t)len);
	less == 1 ? len-- : 0;
	while (len > 0)
	{
		less == 1 ? dstr[len + 1] = (d % 10) + '0': (dstr[len] = (d % 10) + '0');
		d /= 10;
		len--;
	}
	less == 1 ? dstr [len + 1] = d + '0' : (dstr[len] = d + '0');
	less == 1 ? dstr [len] = '-' : 0;
	para->d == 1 ? dstr[19] = '8': 0;
	return  (dstr);
}

char* ft_dstrhh(char d, t_struct * para)
{
	char* dstr;
	int len;
	int t_d;
	int less;

	less = 0;
	d < 0 ? less = 1 && (d = d * -1) : 0;
	// d < 0 ? d = d * -1 : 0;
	len = 0;
	d == -128? (t_d = 127) && (d = 127) && (para->d++) : (t_d = d);
	less == 1 ? len++ : 0;
	t_d = d;
	while (t_d > 9)
	{
		t_d /= 10;
		len++;
	}
	dstr = ft_strnew((size_t)len);
	less == 1 ? len-- : 0;
	while (len > 0)
	{
		less == 1 ? dstr[len + 1] = (d % 10) + '0': (dstr[len] = (d % 10) + '0');
		d /= 10;
		len--;
	}
	less == 1 ? dstr [len + 1] = d + '0' : (dstr[len] = d + '0');
	less == 1 ? dstr [len] = '-' : 0;
	para->d == 1 ? dstr[3] = '8': 0;
	return  (dstr);
}
// char* ft_dstrj(intmax_t d, t_struct * para)
// {
// 	char* dstr;
// 	int len;
// 	intmax_t t_d;
// 	int less;
//
// 	less = 0;
// 	d < 0 ? less = 1 && (d = d * -1) : 0;
// 	// d < 0 ? d = d * -1 : 0;
// 	len = 0;
// 	(d == -9223372036854775807 - 1)	? (t_d = 9223372036854775807) && (d = 9223372036854775807) && (para->d++) : (t_d = d);
// 	less == 1 ? len++ : 0;
// 	t_d = d;
// 	while (t_d > 9)
// 	{
// 		t_d /= 10;
// 		len++;
// 	}
// 	dstr = ft_strnew((size_t)len);
// 	less == 1 ? len-- : 0;
// 	while (len > 0)
// 	{
// 		less == 1 ? dstr[len + 1] = (d % 10) + '0': (dstr[len] = (d % 10) + '0');
// 		d /= 10;
// 		len--;
// 	}
// 	less == 1 ? dstr [len + 1] = d + '0' : (dstr[len] = d + '0');
// 	less == 1 ? dstr [len] = '-' : 0;
// 	para->d == 1 ? dstr[19] = '8': 0;
// 	return  (dstr);
// }
