#include <stdlib.h>
#include "lists.h"

/* Define the structure for a node in the linked list */
typedef struct list_s {
    int data;
    struct list_s *next;
} list_t;

/* Function to count the number of elements in the linked list */
size_t list_len(const list_t *h) {
    size_t count = 0;  // Initialize count to 0

    // Traverse the linked list
    while (h != NULL) {
        count++;      // Increment count for each node
        h = h->next;  // Move to the next node
    }

    return count;
}
