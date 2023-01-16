#include "adt/linked_list.h"
#include "version.h"
#include <stdio.h>

int main(int argc, char** argv) {
    printf("%s v%s\n", get_project_name(), get_project_version());
    printf("Hello World!\n");

    Node top = {
        .num = 5,
        .next = NULL
    };

    size_t length = linked_list_get_length(&top);

    printf("Length of the list: %lu\n", length);

    return 0;
}
