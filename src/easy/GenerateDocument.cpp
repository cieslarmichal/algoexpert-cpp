#include <string>
#include <unordered_map>

bool generateDocument(std::string characters, std::string document)
{
    if (document.empty())
    {
        return true;
    }

    std::unordered_map<char, int> availableCharacters;

    for (const auto& character : characters)
    {
        availableCharacters[character]++;
    }

    for (const auto& documentCharacter : document)
    {
        const auto foundAvailableCharacter = availableCharacters.find(documentCharacter);

        if (foundAvailableCharacter == availableCharacters.end())
        {
            return false;
        }

        const auto& [character, numberOfAvailableCharacters] = *foundAvailableCharacter;

        if (numberOfAvailableCharacters == 0)
        {
            return false;
        }

        availableCharacters[character]--;
    }

    return true;
}
