/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcardiga <lcardiga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:22:22 by lcardiga          #+#    #+#             */
/*   Updated: 2021/10/10 18:48:48 by lcardiga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Функция isalpha возвращает ненулевое значение, если ее аргумент 
является буквой, в противном случае возвращает нуль.
Принадлежность символа к буквам зависит от конкретного языка. 
Для англ. яз таковыми являются прописные и строчные буквы от A до Z. */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
