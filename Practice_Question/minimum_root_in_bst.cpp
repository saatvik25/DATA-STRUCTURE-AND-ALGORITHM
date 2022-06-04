//minimum root in bst


#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int key;
    Node *right ;
    Node *left;
   
    
    Node(int d){
    this->key = d;
    this->right = NULL;
    this->left = NULL;
   
    }
};
//insertion
Node* insert(Node *root,int d){
    if(root == NULL){
    root = new Node(d);
    return root;
}
else if(root->key > d){
    root->left = insert(root->left,d);
    
}

else{
    root->right = insert(root->right,d);
}
return root;
}

void takeinput(Node* &root){
    int data ;
    cin>>data;
    while(data!= -1){
        root = insert(root,data);
        cin>>data;
    }
}
void level(Node *root){
    
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp = q.front();
        
        q.pop();
        
        if(temp == NULL){
            cout<<endl;
            
          if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
        cout<<temp->key<<" ";
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
    
    
}
}}

void inorder(Node *root){
    if(root != NULL){
        inorder(root->left);
        cout<<root->key<<" "<<"";
        inorder(root->right);
}
}


//minimum root in bst

//same for maximum only diffrence is root->right

Node* min(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;
  
  
    
}
int main(){
    
    Node* root = NULL;
    // cout<<"enter data to create bst"<<endl;
    // takeinput(root);
    
     root=insert(root, 50);
  root = insert(root, 30);
    root =insert(root, 20);
  root = insert(root, 40);
    root =insert(root, 70);
    root =insert(root, 60);
    root =insert(root, 80);
    
    cout<<"printing bst"<<endl;
    level(root);
    
    cout<<"inorder"<<endl;
    inorder(root);
    cout<<"\n minimum is "<<min(root)->key<<endl;

    return 0;
}
