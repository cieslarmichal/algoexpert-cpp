class BinaryTree
{
public:
    int value;
    BinaryTree* left = nullptr;
    BinaryTree* right = nullptr;

    BinaryTree(int value)
    {
        this->value = value;
    }
};

int evaluateExpressionTree(BinaryTree* tree)
{
    if (tree == nullptr)
    {
        return 0;
    }

    const auto leftBranchResult = evaluateExpressionTree(tree->left);

    const auto rightBranchResult = evaluateExpressionTree(tree->right);

    if (tree->value == -1)
    {
        return leftBranchResult + rightBranchResult;
    }
    else if (tree->value == -2)
    {
        return leftBranchResult - rightBranchResult;
    }
    else if (tree->value == -3)
    {
        return leftBranchResult / rightBranchResult;
    }
    else if (tree->value == -4)
    {
        return leftBranchResult * rightBranchResult;
    }
    else
    {
        return tree->value;
    }
}
