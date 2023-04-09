#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>

typedef struct bst_node {
    int val;
    struct bst_node *left;
    struct bst_node *right;
} node;

void insert(node *root, node *new) {
    assert(root);
    assert(new);

    if (root == new) return;

    // insert to right
    if (new->val > root->val) {
        if (!root->right) {
            root->right = new;
            return;
        }
        insert(root->right, new);
    } else {
        if (!root->left) {
            root->left = new;
            return;
        }
        insert(root->left, new);
    }
}

void inorder(node *root) {
    if (!root) return;

    inorder(root->left);
    printf("%d ", root->val);
    inorder(root->right);
}

void reversed(node *root) {
    if (!root) return;

    reversed(root->right);
    printf("%d ", root->val);
    reversed(root->left);
}

void preorder(node *root) {
    if (!root) return;

    printf("%d ", root->val);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root) {
    if (!root) return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->val);
}

void print_tree(void (*order)(node *), node *root) {
    order(root);
    printf("\n");
}

node *binary_search(node *root, int val) {
    if (val == root->val) return root;

    if (val > root->val) {
        if (root->right == NULL) return NULL;
        return binary_search(root->right, val);
    } else {
        if (root->left == NULL) return NULL;
        return binary_search(root->left, val);
    }
}


int main() {
    srandom(time(0));
    int n = 10;
    node *root = calloc(n, sizeof(*root));
    for (int i=0; i<n; i++) {
        (root+i)->val = 2 + (random() % 14);
        print_tree(inorder, root);
        insert(root, root+i);
    }

    printf("reversed:\n");
    print_tree(reversed, root);
    printf("\n");
    for (int i=0; i<5; i++) {
        int rnd = 5 + (random() % 11);
        printf("searching for %d output: %d\n", rnd, binary_search(root, rnd) ? binary_search(root, rnd)->val : 0 );
    }

//    node *a = malloc(sizeof(*a));
//    a->val = 8;
//    a->right = NULL;
//    a->left = NULL;
//
//    node *b = malloc(sizeof(*b));
//    b->val = 1;
//    b->right = NULL;
//    b->left = NULL;
//
//    node *c = malloc(sizeof(*b));
//    c->val = 7;
//    c->right = NULL;
//    c->left = NULL;
//
//    ordered(root);
//    printf("\n");
//    insert(root, a);
//    ordered(root);
//    printf("\n");
//    insert(root, b);
//    ordered(root);
//    printf("\n");
//    insert(root, c);
//    ordered(root);
//    printf("\n");
}
