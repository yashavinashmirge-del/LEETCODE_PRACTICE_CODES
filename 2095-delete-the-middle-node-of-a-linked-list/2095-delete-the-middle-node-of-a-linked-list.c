struct ListNode* deleteMiddle(struct ListNode* head)
{
    if(head == NULL || head->next == NULL)
    {
        return NULL;
    }

    int iCount = 0;
    struct ListNode *temp = head;

    while(temp != NULL)
    {
        iCount++;
        temp = temp->next;
    }

    int iTarget = iCount / 2;

    temp = head;

    for(int i = 1; i < iTarget; i++)
    {
        temp = temp->next;
    }

    struct ListNode *deleteNode = temp->next;
    temp->next = deleteNode->next;
    free(deleteNode);

    return head;
}