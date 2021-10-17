#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    int num_cycle = 0;
    node * fast_ptr;
    node * slow_ptr;
    fast_ptr = head;
    slow_ptr = head;
    while(1)
    {
        if(fast_ptr == NULL) return num_cycle;
        fast_ptr = fast_ptr -> next;
        if(fast_ptr == NULL) return num_cycle;
        fast_ptr = fast_ptr -> next;
        if(fast_ptr == NULL) return num_cycle;

        slow_ptr = slow_ptr -> next;
        if(fast_ptr == slow_ptr) return ++num_cycle;
    }

}
