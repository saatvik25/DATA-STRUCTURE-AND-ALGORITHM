


Node* search(Node* root,int target){
    if(root ==NULL || root->key == target){
        return root;
    }
    if(root->key> target){
        return search(root->left,target);
        
    }
    
        return search(root->left,target);
    
    
}
