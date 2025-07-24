/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:39:36 by clnicola          #+#    #+#             */
/*   Updated: 2025/07/24 11:31:48 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*previous;
}	t_stack;

t_stack	*assign_a(int argc, char **argv);
void	ft_stackadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_stacklast(t_stack *lst);
t_stack	*ft_stacknew(int content);
void	ft_stackadd_front(t_stack **lst, t_stack *new);
int		ft_min(t_stack *lst);
int		ft_max(t_stack *lst);
int		ft_stack_size(t_stack *lst);
void	ft_sa(t_stack **stack_a, int flag);
void	ft_sb(t_stack **stack_b, int flag);
void	ft_ss(t_stack **stack_a,t_stack **stack_b, int flag);
void	ft_pb(t_stack **stack_a, t_stack **stack_b, int flag);
void	ft_pa(t_stack **stack_a, t_stack **stack_b, int flag);
void	ft_ra(t_stack **stack_a, int flag);
void	ft_rb(t_stack **stack_b, int flag);
void	ft_rr(t_stack **stack_a, t_stack **stack_b, int flag);

#endif
