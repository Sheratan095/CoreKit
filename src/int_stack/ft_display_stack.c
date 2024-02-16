/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:19:23 by maceccar          #+#    #+#             */
/*   Updated: 2024/02/07 16:19:23 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_display_stack(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	if (ft_is_stack_empty(stack))
	{
		ft_printf("Stack is empty\n");
		return ;
	}
	while (temp->next != NULL)
	{
		ft_printf("%i\n", temp->value);
		temp = temp->next;
	}
}
