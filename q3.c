#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

// a.
typedef struct tree_node {
    int value;
    bool invalid;
    struct tree_node *left;
    struct tree_node *right;
} tnode_t;

// b.
/*
val = 4
bool = 1
[+3 padding]
*ptr = 8
*ptr = 8

therefore sizeof tnode_t is 24 bytes.
*/

// c.
void delete_node(tnode_t *node) {
    node->invalid = true;
}

// d.
void free_node(tnode_t *node) {
    if (node->right == NULL) {
        free(node);
        node = NULL;
        return;
    }

    tnode_t *rightmin = node->right;
    while (rightmin->left) {
        rightmin = rightmin->left;
    }

    tnode_t *rightmin_parent = get_parent(rightmin);
    rightmin_parent->left = rightmin->right;
    rightmin->right = node->right;
    rightmin->left = node->left;
    free(node);
    node = NULL;
}

// e.
int flush_tree(tnode_t *root, void (*my_del)(tnode_t *)) {
    if (!root) {
        return 0;
    }

    if (!root->right && !root->left && root->invalid) {
        my_del(root);
        root = NULL;
        return 1;
    }

    int count = flush_tree(root->left, &my_del);
    count += flush_tree(root->right, &my_del);
    if (root->invalid) {
        my_del(root);
        count++;
    }
    return count;
}

// find_max()
int main() {
    printf("%lu\n", sizeof(bool));
    return 0;
}
