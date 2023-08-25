#include <cmath>
#include <vector>
#include <algorithm>

std::vector<int> sweetAndSavory(std::vector<int> dishes, int target)
{
    if (dishes.size() < 2)
    {
        return {0, 0};
    }

    std::sort(dishes.begin(), dishes.end());

    int currentSweetDishIndex = 0;
    int currentSavoryDishIndex = dishes.size() - 1;

    std::vector<int> closestPairOfDishes{0, 0};
    int closestPairTargetDistance = 1000;

    while (currentSweetDishIndex < currentSavoryDishIndex && dishes[currentSweetDishIndex] < 0 &&
           dishes[currentSavoryDishIndex] > 0)
    {

        const auto sweetDishValue = dishes[currentSweetDishIndex];
        const auto savoryDishValue = dishes[currentSavoryDishIndex];

        const auto currentPairSum = sweetDishValue + savoryDishValue;

        const auto distanceToTarget = std::abs(currentPairSum - target);

        if (distanceToTarget < closestPairTargetDistance && currentPairSum - target <= 0)
        {
            closestPairOfDishes = std::vector<int>{sweetDishValue, savoryDishValue};
            closestPairTargetDistance = std::abs(distanceToTarget);
        }

        if (currentPairSum > target)
        {
            currentSavoryDishIndex--;
        }
        else if (currentPairSum < target)
        {
            currentSweetDishIndex++;
        }
        else
        {
            break;
        }
    }

    return closestPairOfDishes;
}
