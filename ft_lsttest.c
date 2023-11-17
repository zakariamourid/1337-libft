#include "libft.h"
void clear_content(void *a)
{
	return ;
}

int main()
{
	t_list *head;
	t_list *last_node;
	t_list *iterator;
	int i = 0;
	int size = 0;
	int hamid = 1;
	int brahim =2; 
	head = (t_list *)malloc(sizeof(t_list));
	head->content = &hamid;
	printf("head addres is = %p \n ",head);
	ft_lstadd_front(&head, ft_lstnew(&brahim));
	printf("head addres is = %p \n ",head);
	iterator = head;
	while(iterator)
	{
		printf("%d node (%p)=> content(%p) = %d , next = (%p) \n",i+1,iterator,&(iterator->content),*((int *)iterator->content),iterator->next); 
		i++;
		iterator = iterator->next;
	}
	last_node = ft_lstlast(head);
	printf("head = %p ,last_node = %p \n",head,last_node);
	printf("lst size is = %d \n " ,ft_lstsize(head));
	int a = 3;
	ft_lstadd_back(&head,ft_lstnew(&a));
	last_node = ft_lstlast(head);
	printf(" last node (%p)=> content = (%d) \n",last_node,*((int *)last_node->content)); 
	printf("lst size is = %d \n " ,ft_lstsize(head));
	ft_lstclear(&head,clear_content);
	if(!head)
		printf("list is cleared bro!!! \n");
}
