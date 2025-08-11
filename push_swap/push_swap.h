/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clnicola <clnicola@student.42luxembourg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 11:39:36 by clnicola          #+#    #+#             */
/*   Updated: 2025/08/11 17:22:51 by clnicola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"

typedef struct s_stack
{
	long			nbr;
	long			index;
	int				cost;
	int				ischeapest;
	int				isabovemid;
	struct s_stack	*target;
	struct s_stack	*next;
	struct s_stack	*previous;
}					t_stack;

void				assign_a(t_stack **stack_a, char **argv, int start);
void				ft_stackadd_back(t_stack **lst, t_stack *new);
t_stack				*ft_stacklast(t_stack *lst);
t_stack				*ft_stacknew(int content);
void				ft_stackadd_front(t_stack **lst, t_stack *new);
t_stack				*ft_min(t_stack *lst);
t_stack				*ft_max(t_stack *lst);
int					ft_stack_size(t_stack *lst);
void				ft_sa(t_stack **stack_a, int flag);
void				ft_sb(t_stack **stack_b, int flag);
void				ft_ss(t_stack **stack_a, t_stack **stack_b, int flag);
void				ft_pb(t_stack **stack_a, t_stack **stack_b, int flag);
void				ft_pa(t_stack **stack_a, t_stack **stack_b, int flag);
void				ft_ra(t_stack **stack_a, int flag);
void				ft_rb(t_stack **stack_b, int flag);
void				ft_rr(t_stack **stack_a, t_stack **stack_b, int flag);
void				ft_rra(t_stack **stack_a, int flag);
void				ft_rrb(t_stack **stack_b, int flag);
void				ft_rrr(t_stack **stack_a, t_stack **stack_b, int flag);
int					non_digit(char **argv);
int					duplicate_numbers(t_stack *stack_a, int nbr);
int					ft_issorted(t_stack *stack);
void				sort_three(t_stack **stack_a);
void				free_stack(t_stack **stack);
long				ft_atol(const char *nptr);
void				sorting_stacks(t_stack **stack_a, t_stack **stack_b);
void				give_index(t_stack *stack);
void				cost(t_stack *stack_a, t_stack *stack_b);
void				set_cheapest(t_stack *stack_a);
void				find_match_a(t_stack *stack_a, t_stack *stack_b);
void				find_match_b(t_stack *stack_a, t_stack *stack_b);
void				set_values_a(t_stack *stack_a, t_stack *stack_b);
void				set_values_b(t_stack *stack_a, t_stack *stack_b);
t_stack				*get_cheapest(t_stack *stack);
void				to_b(t_stack **stack_a, t_stack **stack_b);
void				to_a(t_stack **stack_a, t_stack **stack_b);
void				rotate_stacks(t_stack **stack_a, t_stack **stack_b,
						t_stack *cheapest);
void				rev_rotate_stacks(t_stack **stack_a, t_stack **stack_b,
						t_stack *cheapest);
void				single_rotate_a(t_stack **stack_a, t_stack *head);
void				single_rotate_b(t_stack **stack_b, t_stack *head);
void				ascending_order(t_stack **stack_a);
void				exit_free(t_stack **stack_a);
int					error_syntax(char *str);

#endif
