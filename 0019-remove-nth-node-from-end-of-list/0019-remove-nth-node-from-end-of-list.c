/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) 
{
    int iCount =0;
    struct ListNode* temp = NULL;
    temp = head;

      while(temp != NULL)
        {
            iCount++;
            temp = temp->next;
        }
               
        if(iCount == n)
        {
            return head->next;
        }

        temp = head;

        for(int i = 1; i < iCount - n; i++)
        {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        return head;
    }
    
//APPROACH-: count the number of nodes then subract the postition value given by the user in  DELETEATPOS