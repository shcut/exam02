#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *lsta = *begin_list;
	t_list *lstb = *begin_list;
	t_list *lstc = *begin_list;

	if (!begin_list)
    	return;
	while(*begin_list && !cmp((*begin_list)->data, data_ref))
	{
		lstc = *begin_list;
		*begin_list = (*begin_list)->next;
		free(lstc);
	}
	lsta = *begin_list;
	while(lsta && lsta->next)
	{
		if(!cmp(lsta->next->data, data_ref))
		{
			lstb = lsta->next;
			lsta->next = lstb->next;
			free(lstb);
		}
		lsta = lsta->next;
	}
}