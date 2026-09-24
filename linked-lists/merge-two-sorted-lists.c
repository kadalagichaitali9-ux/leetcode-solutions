#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* mergeTwoLists(struct ListNode* list1,
                               struct ListNode* list2) {

    struct ListNode dummy;
    struct ListNode *current = &dummy;

    dummy.next = NULL;

    while (list1 != NULL && list2 != NULL) {

        if (list1->val <= list2->val) {
            current->next = list1;
            list1 = list1->next;
        } else {
            current->next = list2;
            list2 = list2->next;
        }

        current = current->next;
    }

    if (list1 != NULL) {
        current->next = list1;
    } else {
        current->next = list2;
    }

    return dummy.next;
}

void printList(struct ListNode *head) {
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }

    printf("\n");
}
int main() {

    struct ListNode *list1 = NULL;
    struct ListNode *list2 = NULL;

    struct ListNode *merged = mergeTwoLists(list1, list2);

    if (merged == NULL) {
        printf("Merged list is empty\n");
    }

    return 0;
}
