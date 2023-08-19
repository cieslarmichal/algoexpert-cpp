#include <algorithm>
#include <string>
#include <unordered_set>
#include <vector>

std::vector<std::vector<std::string>> semordnilap(std::vector<std::string> words)
{
    std::vector<std::vector<std::string>> semordnilaps;

    std::unordered_set<std::string> visitedWords;

    for (const auto& word : words)
    {
        std::string reversedWord{word};

        std::reverse(reversedWord.begin(), reversedWord.end());

        if (visitedWords.find(reversedWord) != visitedWords.end())
        {
            semordnilaps.push_back({word, reversedWord});
        }
        else
        {
            visitedWords.insert(word);
        }
    }

    return semordnilaps;
}
