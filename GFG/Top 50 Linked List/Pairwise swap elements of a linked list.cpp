class Solution {
  public:
    Node* pairWiseSwap(Node* head) {
        // //recursion
        if(head->next == nullptr || head == nullptr){
            return head;
        }
        
        Node* first = head;
        Node* second = head->next;
        Node* a = head->next->next;
        
        Node* newHead = second;
        second->next = head;
        
        first->next = pairWiseSwap(a);
        
        return newHead ;
        
        //   if(head == NULL || head->next == NULL) return head;
        // Node* dummy = new Node(0);
        // dummy->next = head;
        // Node* point = dummy;
        // while(point->next != nullptr && point->next->next != nullptr)
        // {
        //     Node* swap1 = point->next;
        //     Node* swap2 = point->next->next;
            
        //     if(point->next == head) dummy->next = swap2;
            
        //     swap1->next = swap2->next;
        //     swap2->next = swap1;
            
        //     point->next = swap2;
        //     point = swap1;
        // }
        // return dummy->next;
        
    //   { creating new linked list after swapping from arr not right approch
    //     Node* curr = head;  
    //     vector<int>arr;
    //     while(curr != nullptr){
    //         arr.push_back(curr->data);
    //         curr = curr->next;
    //     }
    //     int i = 0 , j = 1;
    //     int n = arr.size();
    //     while(i < n && j < n){
    //         swap(arr[i],arr[j]);
    //         i += 2;
    //         j += 2;
    //     }
    //     Node* head2 = new Node(arr[0]);
    //     Node* tail  = head2;
    //     for(int i = 1; i < n; i++){
    //         tail->next = new Node(arr[i]);
    //         tail = tail -> next;
    //     }
    //     return head2;
    //   }
    
        // { only value swap not nodes need to swap the nodes
        // Node* curr = head;  
        // while(curr != nullptr){
            
        //     int val = curr->data;
        //     curr->data = curr->next->data;
        //     curr->next->data = val;
        //     curr = curr->next->next;
            
        // }
        //  return head;
        // }
        
    }
};
