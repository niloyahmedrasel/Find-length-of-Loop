int countNodesinLoop(struct Node *head) {
         Node *slow = head;
         Node *fast = head;
         int count = 1;
         
         while(fast != NULL && fast->next != NULL){
             slow = slow->next;
             fast = fast->next->next;
             
             if(slow == fast){
                break;
             }
         }
         
          if(fast == NULL || fast->next == NULL){
             return 0;
         }
         
         slow = slow->next;
         while(slow!=fast){
             count++;
             slow = slow->next;
         }
         return count;
    }
