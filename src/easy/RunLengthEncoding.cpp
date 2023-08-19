#include <string>

std::string encodeSequence(char sequenceCharacter, int sequenceLength)
{
    std::string encoded;

    const auto numberOfNinesInSequence = sequenceLength / 9;

    const auto remainderInSequence = sequenceLength % 9;

    for (int i = 0; i < numberOfNinesInSequence; i++)
    {
        encoded += std::string{"9"} + sequenceCharacter;
    }

    if (remainderInSequence > 0)
    {
        encoded += std::to_string(remainderInSequence) + sequenceCharacter;
    }

    return encoded;
}

std::string runLengthEncoding(const std::string& str)
{
    int sequenceLength = 1;
    char sequenceCharacter = str[0];

    std::string result;

    for (int i = 1; i < str.size(); i++)
    {
        if (str[i] == sequenceCharacter)
        {
            sequenceLength++;
        }
        else
        {
            result += encodeSequence(sequenceCharacter, sequenceLength);

            sequenceLength = 1;
            sequenceCharacter = str[i];
        }
    }

    result += encodeSequence(sequenceCharacter, sequenceLength);

    return result;
}
