#include <vector>

bool isValidSubsequence(std::vector<int> array, std::vector<int> sequence)
{
    int arrayIndex = 0;
    int sequenceIndex = 0;

    while (sequenceIndex < sequence.size() && arrayIndex < array.size())
    {
        if (sequence[sequenceIndex] == array[arrayIndex])
        {
            sequenceIndex++;
        }

        arrayIndex++;
    }

    return sequenceIndex == sequence.size();
}
