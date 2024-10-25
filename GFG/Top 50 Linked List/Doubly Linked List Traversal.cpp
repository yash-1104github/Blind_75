vector<int> displayList(Node *head)
{
    
    vector<int>ans1;
    
    Node* curr = head;
    
    while(curr !=  NULL){
        
       ans1.push_back(curr->data);
       curr = curr->next;
       
    }
    
    while(curr != NULL){
        ans1.push_back(curr->data);
        curr = curr->prev;
    }
    return ans1;
}
