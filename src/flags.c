/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkurkela <vkurkela@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 12:50:31 by vkurkela          #+#    #+#             */
/*   Updated: 2020/01/27 17:27:15 by vkurkela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void	flag_hash(t_info *info, const char *str, va_list args)
{
	info->hash = 1;
	parser(info, str, args);
}

void	flag_minus(t_info *info, const char *str, va_list args)
{
	info->minus = 1;
	parser(info, str, args);
}

void	flag_space(t_info *info, const char *str, va_list args)
{
	info->space = 1;
	parser(info, str, args);
}

void	flag_zero(t_info *info, const char *str, va_list args)
{
	info->zero = 1;
	parser(info, str, args);
}

void	flag_plus(t_info *info, const char *str, va_list args)
{
	info->plus = 1;
	parser(info, str, args);
}
