#include "adt/linked_list.h"
#include <stddef.h>


size_t linked_list_get_length(NodePtr top) {
    int length = 0;
    NodePtr current = top;

    while(current != NULL) {
        length++;
        current = current->next;
    }

    return length;
} // end linked_list_get_length


NodePtr linked_list_search(NodePtr top, int key) {

    while (top != NULL && key != top->num) {
        top = top->next;
    }

    return top;

}// end linked_list_search


NodePtr linked_list_get_last(NodePtr top) {
    while(top->next != NULL) {
        top = top->next;
    }
    return top;
}



