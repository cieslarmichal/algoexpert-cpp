#include <vector>

int majorityElement(std::vector<int> array)
{
    int majorityElement = -1;
    int count = 0;

    for (const auto& number : array)
    {
        if (count == 0)
        {
            majorityElement = number;
            count = 1;
        }
        else if (number == majorityElement)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    return majorityElement;
}
