Node* minValue(Node* root) {
    Node* temp = root;
    while(temp->left != NULL) {
        temp = temp->left;
    }
    return temp;
}

Node* deleteFromBST(Node* root, int key) {
    
    if(root == NULL) 
        return root;

    // Search left
    if(key < root->data) {
        root->left = deleteFromBST(root->left, key);
    }
    // Search right
    else if(key > root->data) {
        root->right = deleteFromBST(root->right, key);
    }
    else {

        // CASE 1: No child
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        // CASE 2: Only right child
        if(root->left == NULL) {
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // CASE 2: Only left child
        if(root->right == NULL) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // CASE 3: Two children
        Node* temp = minValue(root->right);
        root->data = temp->data;  
        root->right = deleteFromBST(root->right, temp->data);
    }

    return root;
}


int main(){
    root = deleteFromBST(root, 50);


}