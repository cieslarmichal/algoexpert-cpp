#include <any>
#include <vector>

int productSumHelper(std::any element, int depth)
{
    try
    {
        return depth * any_cast<int>(element);
    }
    catch (const std::exception& error)
    {
        const auto array = any_cast<std::vector<std::any>>(element);

        int sum = 0;

        for (const auto& nestedElement : array)
        {
            sum += depth * productSumHelper(nestedElement, depth + 1);
        }

        return sum;
    }
}

int productSum(std::vector<std::any> array)
{
    int productSum = 0;

    for (const auto& element : array)
    {
        productSum += productSumHelper(element, 1);
    }

    return productSum;
}
