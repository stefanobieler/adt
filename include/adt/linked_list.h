#ifndef ADT_LINKED_LIST_H
#define ADT_LINKED_LIST_H

#include <sys/types.h>

typedef struct node {
    int num;
    struct node* next;
} Node, *NodePtr;

/**
 *  Gets the size of the linked list collection
 *
 *  @param top: The first node in the list
 *  @return The size of the entire list
 */
size_t linked_list_get_length(NodePtr top); 

/**
 *  Search for an item in the linked list
 *
 *  @param top: The first node in the list
 *  @param key: The value to search for in the list
 *
 *  @return The pointer to the item searching for
 */
NodePtr linked_list_search(NodePtr top, int key);

/**
 *  Get the last item in the linked list
 *
 *  @param top: The first node in the list
 *  @return The pointer to the last node in the list
 */
NodePtr linked_list_get_last(NodePtr top);

#endif
