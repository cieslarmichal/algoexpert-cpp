#include <cmath>

class LinkedList
{
public:
    int value;
    LinkedList* next = nullptr;

    LinkedList(int value)
    {
        this->value = value;
    }
};

LinkedList* middleNode(LinkedList* linkedList)
{
    LinkedList* currentNode = linkedList;

    int numberOfNodes = 0;

    while (currentNode != nullptr)
    {
        numberOfNodes++;

        currentNode = currentNode->next;
    }

    const auto middleNodeNumber = numberOfNodes % 2 == 1 ? std::ceil(numberOfNodes / 2.f) : numberOfNodes / 2 + 1;

    currentNode = linkedList;

    int currentNodeNumber = 0;

    while (currentNode != nullptr)
    {
        currentNodeNumber++;

        if (currentNodeNumber == middleNodeNumber)
        {
            return currentNode;
        }

        currentNode = currentNode->next;
    }

    return nullptr;
}
