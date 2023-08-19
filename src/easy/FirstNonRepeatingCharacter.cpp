#include <string>
#include <unordered_map>

int firstNonRepeatingCharacter(std::string string)
{
    std::unordered_map<char, int> characterOccurrences;

    for (const auto& character : string)
    {
        characterOccurrences[character]++;
    }

    for (int i = 0; i < string.size(); i++)
    {
        const auto character = string[i];

        if (characterOccurrences[character] == 1)
        {
            return i;
        }
    }

    return -1;
}
