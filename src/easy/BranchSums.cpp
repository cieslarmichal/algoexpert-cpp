#include <vector>

class BinaryTree
{
public:
    int value;
    BinaryTree* left;
    BinaryTree* right;

    BinaryTree(int value)
    {
        this->value = value;
        left = nullptr;
        right = nullptr;
    }
};

void branchSumsHelper(BinaryTree* root, std::vector<int>& result, int currentSum)
{
    if (root == nullptr)
    {
        return;
    }

    currentSum += root->value;

    if (root->left == nullptr && root->right == nullptr)
    {
        result.push_back(currentSum);
    }

    branchSumsHelper(root->left, result, currentSum);

    branchSumsHelper(root->right, result, currentSum);
}

std::vector<int> branchSums(BinaryTree* root)
{
    std::vector<int> result;

    branchSumsHelper(root, result, 0);

    return result;
}
