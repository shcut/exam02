#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "list.h"



t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *lst2 = lst;
	t_list *tmp = lst;
	int itmp;
	while(lst2->next && lst2)
	{
		tmp = lst;
		while(tmp->next)
		{
			if(!cmp(tmp->data, tmp->next->data))
			{
				itmp = tmp->next->data;
				tmp->next->data = tmp->data;
				tmp->data = itmp;
			}
			tmp = tmp->next;
		}
		lst2 = lst2->next;
	}
	return(lst);
}