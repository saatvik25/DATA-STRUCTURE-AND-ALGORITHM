


SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    
if(position == 0){
    
    llist = llist->next;
    return llist;
}
SinglyLinkedListNode* temp = llist;
for(int i=0;i<position-1;i++){
temp = temp->next;
}
temp->next = temp->next->next;
return llist;
}
