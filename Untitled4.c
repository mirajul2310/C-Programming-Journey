
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void detectCycle(struct Node* head) {
    struct Node *slow = head, *fast = head;

    // Detect cycle using Floyd's algorithm
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) { // Cycle detected
            printf("Has Cycle: Yes\n");

            // Find the start of the cycle
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            printf("Cycle Start Node: %d\n", slow->data);
            return;
        }
    }

    // No cycle found
    printf("Has Cycle: No\n");
}

int main() {
    // Create a sample linked list: 5 -> 10 -> 15 -> 20
    struct Node* head = malloc(sizeof(struct Node));
    head->data = 5;
    head->next = malloc(sizeof(struct Node));
    head->next->data = 10;
    head->next->next = malloc(sizeof(struct Node));
    head->next->next->data = 15;
    head->next->next->next = malloc(sizeof(struct Node));
    head->next->next->next->data = 20;

    // Create a cycle: 20 points back to 10
    head->next->next->next->next = head->next;

    // Detect cycle
    detectCycle(head);

    return 0;
}
