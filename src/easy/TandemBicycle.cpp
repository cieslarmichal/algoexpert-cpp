#include <algorithm>
#include <vector>

int tandemBicycleFastest(std::vector<int> redShirtSpeeds, std::vector<int> blueShirtSpeeds)
{
    std::sort(redShirtSpeeds.begin(), redShirtSpeeds.end());

    std::sort(blueShirtSpeeds.begin(), blueShirtSpeeds.end(), std::greater{});

    int totalTandemSpeed = 0;

    for (int i = 0; i < redShirtSpeeds.size(); i++)
    {
        totalTandemSpeed += std::max(redShirtSpeeds[i], blueShirtSpeeds[i]);
    }

    return totalTandemSpeed;
}

int tandemBicycleSlowest(std::vector<int> redShirtSpeeds, std::vector<int> blueShirtSpeeds)
{
    std::sort(redShirtSpeeds.begin(), redShirtSpeeds.end());

    std::sort(blueShirtSpeeds.begin(), blueShirtSpeeds.end());

    int totalTandemSpeed = 0;

    for (int i = 0; i < redShirtSpeeds.size(); i++)
    {
        totalTandemSpeed += std::max(redShirtSpeeds[i], blueShirtSpeeds[i]);
    }

    return totalTandemSpeed;
}

int tandemBicycle(std::vector<int> redShirtSpeeds, std::vector<int> blueShirtSpeeds, bool fastest)
{
    if (fastest)
    {
        return tandemBicycleFastest(redShirtSpeeds, blueShirtSpeeds);
    }

    return tandemBicycleSlowest(redShirtSpeeds, blueShirtSpeeds);
}
