/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstlast.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: joppe <jboeve@student.codam.nl>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/03 18:09:12 by joppe         #+#    #+#                 */
/*   Updated: 2022/11/03 18:15:29 by joppe         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	t_list *tmp;
	tmp = lst;
	while (tmp) 
	{
		if (!tmp->next)
			break ;
		tmp = tmp->next;
	}
	return (tmp);
}
