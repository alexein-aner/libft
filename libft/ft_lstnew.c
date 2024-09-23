/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knieve-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:47:34 by knieve-l          #+#    #+#             */
/*   Updated: 2024/09/23 11:50:45 by knieve-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
 
t_list	*ft_lstnew(void *content)
{
	t_list	*el = (t_list *)malloc(sizeof(t_list));
	if (!el)
		return (NULL);
	el->content = content;
	el->next = NULL;
	return (el);
}
