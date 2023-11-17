#include "libft.h"

void *add_one(void *nbr)
{
	int *nb = (int *) nbr;
	*nb = 42;
}
	
void del(void *a)
{
	return ;
}
void ft_printf(t_list *head)
{
	int i =0;
	while(head)
	{
		printf("node %d ,content = %d  ,next = %p \n ",i + 1,*((int *)head->content),head->next);
		head = head->next;
	}
}
int main()
{
	t_list *head;
	t_list *new_list;
	int a = 1;
	int b = 2;
	head = ft_lstnew(&a);
	ft_lstadd_back(&head,ft_lstnew(&b));
	ft_printf(head);
	ft_lstiter(head,add_one);
	printf("---------------------after iterit ----------------------------------\n");
	ft_printf(head);
	new_list = ft_lstmap(head,&add_one,del);
	printf("---------------------after lstmap ----------------------------------\n");
	ft_printf(new_list);
	ft_lstclear(&head,del);
	if(!head)
		printf("lst is cleared\n");

}
