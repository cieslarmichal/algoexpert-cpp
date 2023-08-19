#include <map>
#include <set>
#include <string>
#include <vector>

std::vector<std::string> commonCharacters(std::vector<std::string> strings)
{
    std::map<char, int> characterOccurrences;

    for (const auto& string : strings)
    {
        std::set<char> uniqueStringCharacters(string.begin(), string.end());

        for (const auto& character : uniqueStringCharacters)
        {
            characterOccurrences[character]++;
        }
    }

    std::vector<std::string> result;

    for (const auto& [character, numberOfOccurrences] : characterOccurrences)
    {
        if (numberOfOccurrences == strings.size())
        {
            result.push_back(std::string{character});
        }
    }

    return result;
}
