/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vle-gal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/18 21:34:29 by vle-gal           #+#    #+#             */
/*   Updated: 2017/11/18 21:38:07 by vle-gal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_flags_less(char * s, size_t len, t_struct * para)
{
	int		n;
	char	*new_s;
	int		len_less;

	if (para->nbr < (int)len)
		return(s);
	len_less = para->nbr;
	para->s_ == 1 || para->p_ == 1? len_less-- : 0 ;
	new_s = ft_strnew(para->nbr);
	n = 0;
	while (n < (int)len)
	{
		new_s[n] = s[n];
		n++;
	}
	while (n < len_less)
	{
		new_s[n] = ' ';
		n++;
	}
	return (new_s);
}

char	*ft_flags_height(char * s, int len, t_struct * para)
{
	int		a;
	int		n;
	char	*new_s;

	n = 0;
	a = para->nbr - (int)len;
	if (a > 0)
	{
		new_s = ft_strnew(para->nbr);
		while (a > 0)
		{
			para->z_ == 1 && para->d_ == -1 ? new_s[n] = '0' : (new_s[n] = ' ');
			n++;
			a--;
		}
		para->s_ == 1 && para->p_ == 0 ? new_s[0] = ' ' : 0;
		para->p_ == 1 && para->z_ == 1 && para->d_ == -1 ? new_s[0] = '+' : 0;
		para->p_ == 1 && para->z_ == 1 && para->d_ > 0 ? new_s[n - 1] = '+' : 0;
		para->p_ == 1 && para->z_ == 0 ? new_s[n - 1] = '+' : 0;
		while (s[a])
		{
			new_s[n] = s[a];
			n++;
			a++;
		}
		return (new_s);
	}
	return (s);
}

char	*ft_flags_height_int(char *s, int len, t_struct *para)
{
	int		a;
	int		n;
	char	*new_s;

	n = 0;
	a = para->nbr - (int)len;
	if (a > 0)
	{
		new_s = ft_strnew(para->nbr);
		while (a > 0)
		{
			para->z_ == 1 && para->d_ == -1 ? new_s[n] = '0' : (new_s[n] = ' ');
			n++;
			a--;
		}
		para->s_ == 1 && para->p_ == 0 ? new_s[0] = ' ' : 0;
		para->p_ == 1 && para->z_ == 1 && para->d_ == -1 ? new_s[0] = '+' : 0;
		para->p_ == 1 && para->z_ == 1 && para->d_ > 0 ? new_s[n - 1] = '+' : 0;
		para->p_ == 1 && para->z_ == 0 ? new_s[n - 1] = '+' : 0;
		while (s[a])
		{
			new_s[n] = s[a];
			s[a] == '-' && para->z_ == 1 ? new_s[0] = '-' : 0;
			s[a] == '-' && para->z_ == 1 ? new_s[n] = '0' : 0;
			n++;
			a++;
		}
		return (new_s);
	}
	return (s);
}

char	*ft_flags_dot(char* s, size_t len, t_struct * para)
{
	int		n;
	int		x;
	char	*new_s;

	n = 0;
	x = 0;
	if (para->d_ < (int)len)
	return (s);
	else
	{
		new_s = ft_strnew((size_t)para->d_);
		while (n < (para->d_ - (int)len))
		{
			new_s[n] = '0';
			n++;
		}
		while (n < para->d_)
		{
			new_s[n] = s[x];
			x++;
			n++;
		}
		return (new_s);
	}
	return (s);
}
char	*ft_flags_dot_int(char *s, size_t len, t_struct * para)
{
	char	*new_s;
	int		n;
	int		x;

	x = 0;
	n = 0;
	s[0] == '-' ? len-- : 0;
	if (para->d_ == 0 && (para->chara == 'x' || para->chara == 'X' ||
		para->chara == 'o' || para->chara == 'O'))
		s[0] = '\0';
	if (para->d_ < (int)len)
		return (s);
	s[0] != '-' || para->p_ != 1 || para->s_ != 1 ?
	new_s = ft_strnew(para->d_) : (new_s = ft_strnew(para->d_++));
	para->p_ == 1 && para->nbr != -1 ? new_s[0] = '+' : 0;
	para->s_ == 1 && para->p_ == 0 ? new_s[0] = ' ' : 0;
	s[0] == '-' ? new_s[0] = '-' : 0;
	while (n < para->d_ - (int)len)
	{
		new_s[n] != '\0' ? para->d_++ : (new_s[n] = '0');
		new_s[n] != '\0' ? n++ : (new_s[n] = '0');
	}
	while (n < para->d_)
	{
		s[0] != '-' ? new_s[n] = s[x] : (new_s[n] = s[x + 1]);
		x++;
		n++;
	}
	para->p_ = 0;
	para->s_ = 0;
	return (new_s);
}
