class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* sum_node = NULL;//
        ListNode* node;//
        ListNode* p ;
        while(l1!=NULL || l2!=NULL || carry){
            int sum = 0;
            if(l1!=NULL){
                sum +=   (l1->val);
                l1=l1->next;
               
                
            }
            if(l2!=NULL ){
                sum +=   (l2->val);
                l2=l2->next;
               
             
            }
            sum += carry;
            int digit = sum % 10;
            carry = sum/10;
            
            // right now list er vitore sum ke dite hbetaile dewar upai
            node = new ListNode(digit);
            // ListNode* node = new ListNode(digit);
            if(sum_node == NULL){
                sum_node = node;//sum_node khali first node(linkedlist) point kore boshe thakbe
                p = node; // p node will also point here but he has some traversing capability.
            }
            else{
             p -> next = node;
             p = p -> next;  /// traversing 
            }
        }
    return sum_node;
    }
    
};
