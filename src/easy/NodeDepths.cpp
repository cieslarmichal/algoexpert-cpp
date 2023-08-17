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

int nodeDepthsHelper(BinaryTree* root, int currentSum)
{
    if (root == nullptr)
    {
        return 0;
    }

    const auto leftSum = nodeDepthsHelper(root->left, currentSum + 1);

    const auto rightSum = nodeDepthsHelper(root->right, currentSum + 1);

    return currentSum + leftSum + rightSum;
}

int nodeDepths(BinaryTree* root)
{
    return nodeDepthsHelper(root, 0);
}
