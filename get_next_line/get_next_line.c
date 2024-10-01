/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 11:13:49 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/30 17:56:30 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>

char    *get_next_line(int  fd)
{
    // Add needed error checks
    // read fd in buf-sized chunks, until \n or \0 is found, 
    // if theres one before end of the chunk, store leftover 
    // in left_c, and fill the line buf with the ch before that,
    // if there already were leftover chars, append the new results 
    // at the end
}
