#include <string>

bool isPalindrome(std::string str)
{
    int lowerIndex = 0;
    int upperIndex = str.size() - 1;

    while (lowerIndex < upperIndex)
    {
        if (str[lowerIndex] != str[upperIndex])
        {
            return false;
        }

        lowerIndex++;
        upperIndex--;
    }

    return true;
}
