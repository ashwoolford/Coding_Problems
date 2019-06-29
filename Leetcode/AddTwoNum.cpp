/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    
    typedef long long ll;
    
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        return addToList(l1, l2);
        
    }
    
    int carryChecker(int val)
    {
        int flag = val%10;
        return flag;
    }
    
    
    ListNode* addToList(ListNode* l1, ListNode* l2)
    {
        ListNode* res = new ListNode(-1);
        ListNode* temp = res;
        
        int carry = 0;
        while(l1 != NULL || l2 != NULL)
        {
            int x = 0;
            int y = 0;
            int sum = 0;
            
            if(l1 != NULL)
            { 
                x = l1->val;
                l1 = l1->next;
            }
            else x = 0;
            
            if(l2 != NULL)
            { 
                y = l2->val;
                l2 = l2->next;
            }
            else y = 0;
            
            if((x+y+carry) == carryChecker(x+y+carry)) {sum = x+y+carry; carry = 0;}
            else { sum = carryChecker(x+y+carry); carry = 1;}
            
            ListNode* newNode = new ListNode(sum);
            temp->next = newNode;
            temp = newNode;
            //cout<<sum<<endl;
        }
        
        if(carry != 0) {
            ListNode* finalNode = new ListNode(carry);
            temp->next = finalNode;
        };
        
        return res->next;
    }
    
};