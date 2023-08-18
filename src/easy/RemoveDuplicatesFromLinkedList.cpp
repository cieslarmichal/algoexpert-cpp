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

LinkedList* removeDuplicatesFromLinkedList(LinkedList* linkedList)
{
    LinkedList* previousNode = linkedList;
    LinkedList* currentNode = linkedList->next;

    while (currentNode != nullptr)
    {
        if (currentNode->value == previousNode->value)
        {
            previousNode->next = currentNode->next;
        }
        else
        {
            previousNode = currentNode;
        }

        currentNode = currentNode->next;
    }

    return linkedList;
}
