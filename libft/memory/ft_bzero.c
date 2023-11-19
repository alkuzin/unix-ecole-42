/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alkuzin <[null]@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:07:56 by alkuzin           #+#    #+#             */
/*   Updated: 2023/11/16 18:49:22 by alkuzin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_memory.h"

void ft_bzero(void *s, size_t n)
{
    unsigned char *src;
    int i;

    src = (unsigned char *)s;
    i = 0;
    while(src[i] && n > 0)
    {
        src[i] = '\0';
        i++;
        n--;
    }
}