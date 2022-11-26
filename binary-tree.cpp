#include <iostream>
using namespace std;

/*
                 1 <---Root Node
                / \
               2    3
              / \  / \
             4  5  6  7 //Leaf Nodes

        Binary tree traversals:
- pre-order traversal (root-left-right) : 1245367 
- in-order traversal (left-root-right)  : 4251637
- post-order traversal (left-right-root): 4526731
*/

struct node{
    int data;
    struct node *left;
    struct node *right;
};

node* insert_level_order(int arr[], int i, int n) {
/**
     * @brief 
     * 0 12  34567
     * 1 23  45678
     */
    node *root = nullptr;
    if (i < n) {
        root = new node;
        root->data = arr[i];
        root->left = insert_level_order(arr, 2*i+1, n);
        root->right = insert_level_order(arr, 2*i+2, n);
    }
    return root;
}

void print_tree_in_order(node *root){
    if(root != nullptr){
        print_tree_in_order(root->left);
        cout << root->data << " ";
        print_tree_in_order(root->right);
    }
}

void print_tree_pre_order(node *root){
    if(root != nullptr){
        cout << root->data << " ";
        print_tree_pre_order(root->left);
        print_tree_pre_order(root->right);
    }
}

void print_tree_post_order(node *root){
    if(root != nullptr){
        print_tree_post_order(root->left);
        print_tree_post_order(root->right);
        cout << root->data << " ";
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int N= sizeof(arr) / sizeof(arr[0]);
    node *root= insert_level_order(arr, 0, N);

    cout << "pre order traversal: ";
    print_tree_pre_order(root);
    cout << endl;

    cout << "in order traversal: ";
    print_tree_in_order(root);
    cout << endl;

    cout << "post order traversal: ";
    print_tree_post_order(root);
    cout << endl;
    

    return 0;
}