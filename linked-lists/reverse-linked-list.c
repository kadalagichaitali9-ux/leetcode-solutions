#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode *prev = NULL;
    struct ListNode *current = head;

    while (current != NULL) {
        struct ListNode *next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

void printList(struct ListNode *head) {
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

int main() {
    struct ListNode *head = malloc(sizeof(struct ListNode));

    head->val = 1;
    head->next = NULL;

    printf("Original list: ");
    printList(head);

    head = reverseList(head);

    printf("Reversed list: ");
    printList(head);

    free(head);

    return 0;
}