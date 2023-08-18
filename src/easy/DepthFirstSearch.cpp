#include <string>
#include <vector>

class Node
{
public:
    std::string name;
    std::vector<Node*> children;

    Node(std::string str)
    {
        name = str;
    }

    std::vector<std::string> depthFirstSearch(std::vector<std::string>* array)
    {
        array->push_back(name);

        for (const auto& child : children)
        {
            child->depthFirstSearch(array);
        }

        return *array;
    }

    Node* addChild(std::string childName)
    {
        Node* child = new Node(childName);
        children.push_back(child);
        return this;
    }
};
