#include "libft.h"

void ft_printf(t_list *head)
{
	int i =0;
	while(head)
	{
		printf("node %d ,content = %s  ,next = %p \n ",i + 1,(char *) head->content,head->next);
		head = head->next;
	}
}
int main()
{
	t_list *head;
	head = ft_lstnew("first");
	ft_lstadd_back(&head,ft_lstnew("second"));
	ft_printf(head);
	ft_lstclear
	ft_printf(head);
}
