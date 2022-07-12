#ifndef AVLTREE_H
#define AVLTREE_H

#include "BinaryTree.h"
#include <vector>
#include <stdexcept>
using namespace std;

template<typename T>
class AVLTreeNode : public TreeNode<T>
{
public:
  int height; // height of the node

  AVLTreeNode(T element) : TreeNode<T>(element) // Constructor
  {
    height = 0;
  }
};

template <typename T>
class AVLTree : public BinaryTree<T>
{
public:
  AVLTree();
  AVLTree(T elements[], int arraySize);
  //  AVLTree(BinaryTree<T> &tree); left as exercise
  //  ~AVLTree(); left as exercise

  bool insert(T element); // Redefine insert defined in BinaryTree
  bool remove(T element); // Redefine remove defined in BinaryTree

  // Redefine createNewNode defined in BinaryTree
  AVLTreeNode<T> * createNewNode(T element);

  /** Balance the nodes in the path from the specified
   * node to the root if necessary */
  void balancePath(T element);

  /** Update the height of a specified node */
  void updateHeight(AVLTreeNode<T> *node);

  /** Return the balance factor of the node */
  int balanceFactor(AVLTreeNode<T> *node);

  /** Balance LL (see Figure 26.1) */
  void balanceLL(TreeNode<T> *A, TreeNode<T> *parentOfA);

  /** Balance LR (see Figure 26.3) */
  void balanceLR(TreeNode<T> *A, TreeNode<T> *parentOfA);

  /** Balance RR (see Figure 26.2) */
  void balanceRR(TreeNode<T> *A, TreeNode<T> *parentOfA);

  /** Balance RL (see Figure 26.4) */
  void balanceRL(TreeNode<T> *A, TreeNode<T> *parentOfA);

private:
  int height;
};

template <typename T>
AVLTree<T>::AVLTree()
{
  height = 0;
}

template <typename T>
AVLTree<T>::AVLTree(T elements[], int arraySize)
{
  root = NULL;
  size = 0;

  for (int i = 0; i < arraySize; i++)
  {
    insert(elements[i]);
  }
}

template <typename T>
AVLTreeNode<T> * AVLTree<T>::createNewNode(T element)
{
  return new AVLTreeNode<T>(element);
}

template <typename T>
bool AVLTree<T>::insert(T element)
{
  bool successful = BinaryTree<T>::insert(element);
  if (!successful)
    return false; // element is already in the tree
  else
    // Balance from element to the root if necessary
    balancePath(element);

  return true; // element is inserted
}

template <typename T>
void AVLTree<T>::balancePath(T element)
{
  vector<TreeNode<T>* > *p = path(element);
  for (int i = (*p).size() - 1; i >= 0; i--)
  {
    AVLTreeNode<T> *A = static_cast<AVLTreeNode<T>*>((*p)[i]);
    updateHeight(A);
    AVLTreeNode<T> *parentOfA = (A == root) ? NULL :
      static_cast<AVLTreeNode<T>*>((*p)[i - 1]);

    switch (balanceFactor(A))
    {
      case -2:
        if (balanceFactor(
            static_cast<AVLTreeNode<T>*>(((*A).left))) <= 0)
          balanceLL(A, parentOfA); // Perform LL rotation
        else
          balanceLR(A, parentOfA); // Perform LR rotation
        break;
      case +2:
        if (balanceFactor(
             static_cast<AVLTreeNode<T>*>(((*A).right))) >= 0)
          balanceRR(A, parentOfA); // Perform RR rotation
        else
          balanceRL(A, parentOfA); // Perform RL rotation
    }
  }
}

template <typename T>
void AVLTree<T>::updateHeight(AVLTreeNode<T> *node)
{
  if (node->left == NULL && node->right == NULL) // node is a leaf
    node->height = 0;
  else if (node->left == NULL) // node has no left subtree
    node->height =
      1 + (*static_cast<AVLTreeNode<T>*>((node->right))).height;
  else if (node->right == NULL) // node has no right subtree
    node->height =
      1 + (*static_cast<AVLTreeNode<T>*>((node->left))).height;
  else
    node->height = 1 +
      max((*static_cast<AVLTreeNode<T>*>((node->right))).height,
      (*static_cast<AVLTreeNode<T>*>((node->left))).height);
}

template <typename T>
int AVLTree<T>::balanceFactor(AVLTreeNode<T> *node)
{
  if (node->right == NULL) // node has no right subtree
    return -node->height;
  else if (node->left == NULL) // node has no left subtree
    return +node->height;
  else
    return (*static_cast<AVLTreeNode<T>*>((node->right))).height -
      (*static_cast<AVLTreeNode<T>*>((node->left))).height;
}

template <typename T>
void AVLTree<T>::balanceLL(TreeNode<T> *A, TreeNode<T> *parentOfA)
{
  TreeNode<T> *B = (*A).left; // A is left-heavy and B is left-heavy

  if (A == root)
    root = B;
  else
    if (parentOfA->left == A)
      parentOfA->left = B;
    else
      parentOfA->right = B;

  A->left = B->right; // Make T2 the left subtree of A
  B->right = A; // Make A the left child of B
  updateHeight(static_cast<AVLTreeNode<T>*>(A));
  updateHeight(static_cast<AVLTreeNode<T>*>(B));
}

template <typename T>
void AVLTree<T>::balanceLR(TreeNode<T> *A, TreeNode<T> *parentOfA)
{
  TreeNode<T> *B = A->left; // A is left-heavy
  TreeNode<T> *C = B->right; // B is right-heavy

  if (A == root)
    root = C;
  else
    if (parentOfA->left == A)
      parentOfA->left = C;
    else
      parentOfA->right = C;

  A->left = C->right; // Make T3 the left subtree of A
  B->right = C->left; // Make T2 the right subtree of B
  C->left = B;
  C->right = A;

  // Adjust heights
  updateHeight(static_cast<AVLTreeNode<T>*>(A));
  updateHeight(static_cast<AVLTreeNode<T>*>(B));
  updateHeight(static_cast<AVLTreeNode<T>*>(C));
}

template <typename T>
void AVLTree<T>::balanceRR(TreeNode<T> *A, TreeNode<T> *parentOfA)
{
  // A is right-heavy and B is right-heavy
  TreeNode<T> *B = A->right;

  if (A == root)
    root = B;
  else
    if (parentOfA->left == A)
      parentOfA->left = B;
    else
      parentOfA->right = B;

  A->right = B->left; // Make T2 the right subtree of A
  B->left = A;
  updateHeight(static_cast<AVLTreeNode<T>*>(A));
  updateHeight(static_cast<AVLTreeNode<T>*>(B));
}

template <typename T>
void AVLTree<T>::balanceRL(TreeNode<T> *A, TreeNode<T> *parentOfA)
{
  TreeNode<T> *B = A->right; // A is right-heavy
  TreeNode<T> *C = B->left; // B is left-heavy

  if (A == root)
    root = C;
  else
    if (parentOfA->left == A)
      parentOfA->left = C;
    else
      parentOfA->right = C;

  A->right = C->left; // Make T2 the right subtree of A
  B->left = C->right; // Make T3 the left subtree of B
  C->left = A;
  C->right = B;

  // Adjust heights
  updateHeight(static_cast<AVLTreeNode<T>*>(A));
  updateHeight(static_cast<AVLTreeNode<T>*>(B));
  updateHeight(static_cast<AVLTreeNode<T>*>(C));
}

template <typename T>
bool AVLTree<T>::remove(T element)
{
  if (root == NULL)
    return false; // Element is not in the tree

  // Locate the node to be deleted and also locate its parent node
  TreeNode<T> *parent = NULL;
  TreeNode<T> *current = root;
  while (current != NULL)
  {
    if (element < current->element)
    {
      parent = current;
      current = current->left;
    }
    else if (element > current->element)
    {
      parent = current;
      current = current->right;
    }
    else
      break; // Element is in the tree pointed by current
  }

  if (current == NULL)
    return false; // Element is not in the tree

  // Case 1: current has no left children (See Figure 23.6)
  if (current->left == NULL)
  {
    // Connect the parent with the right child of the current node
    if (parent == NULL)
      root = current->right;
    else
    {
      if (element < parent->element)
        parent->left = current->right;
      else
        parent->right = current->right;

      // Balance the tree if necessary
      balancePath(parent->element);
    }
  }
  else
  {
    // Case 2: The current node has a left child
    // Locate the rightmost node in the left subtree of
    // the current node and also its parent
    TreeNode<T> *parentOfRightMost = current;
    TreeNode<T> *rightMost = current->left;

    while (rightMost->right != NULL)
    {
      parentOfRightMost = rightMost;
      rightMost = rightMost->right; // Keep going to the right
    }

    // Replace the element in current by the element in rightMost
    current->element = rightMost->element;

    // Eliminate rightmost node
    if (parentOfRightMost->right == rightMost)
      parentOfRightMost->right = rightMost->left;
    else
      // Special case: parentOfRightMost is current
      parentOfRightMost->left = rightMost->left;

    // Balance the tree if necessary
    balancePath(parentOfRightMost->element);
  }

  size--;
  return true; // Element inserted
}

#endif
