#include <cmath>

class BST
{
public:
    int value;
    BST* left;
    BST* right;

    BST(int val);
    BST& insert(int val);
};

int findClosestValueInBstHelper(BST* tree, int target, int closestValue)
{
    if (tree == nullptr)
    {
        return closestValue;
    }

    if (std::abs(target - tree->value) < std::abs(target - closestValue))
    {
        closestValue = tree->value;
    }

    if (target < tree->value)
    {
        return findClosestValueInBstHelper(tree->left, target, closestValue);
    }
    else if (target > tree->value)
    {
        return findClosestValueInBstHelper(tree->right, target, closestValue);
    }

    return closestValue;
}

int findClosestValueInBst(BST* tree, int target)
{
    return findClosestValueInBstHelper(tree, target, 100000);
}
