#include <string>

std::string caesarCypherEncryptor(std::string str, int key)
{
    const auto firstCharacterAsNumber = 97;
    const auto lastCharacterAsNumber = 122;
    const auto numberOfLetterInAlphabet = 26;

    key = key % numberOfLetterInAlphabet;

    for (auto& character : str)
    {
        const auto characterAsNumber = static_cast<int>(character);

        if (characterAsNumber + key > lastCharacterAsNumber)
        {
            const auto numberOfShiftedCharacters = (characterAsNumber + key - 1) % lastCharacterAsNumber;

            character = static_cast<char>(firstCharacterAsNumber + numberOfShiftedCharacters);
        }
        else
        {
            character = static_cast<char>(character + key);
        }
    }

    return str;
}
