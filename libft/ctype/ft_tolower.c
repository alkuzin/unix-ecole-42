/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:33:38 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/15 20:35:40 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

int ft_tolower(int c);

int ft_tolower(int c)
{
    if(ft_isupper(c))
        return (c + ('a' - 'A'));
    return c;
}