#include <vector>

std::vector<int> arrayOfProducts(std::vector<int> array)
{
    std::vector<int> result(array.size(), 1);

    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array.size(); j++)
        {
            if (i == j)
            {
                continue;
            }

            result[i] *= array[j];
        }
    }

    return result;
}

std::vector<int> arrayOfProducts2(std::vector<int> array)
{
    std::vector<int> productsOfNumbersFromLeftToCurrent(array.size(), 0);
    std::vector<int> productsOfNumbersFromRightToCurrent(array.size(), 0);

    productsOfNumbersFromLeftToCurrent[0] = array[0];
    productsOfNumbersFromRightToCurrent[array.size() - 1] = array[array.size() - 1];

    for (int i = 1; i < array.size(); i++)
    {
        productsOfNumbersFromLeftToCurrent[i] = array[i] * productsOfNumbersFromLeftToCurrent[i - 1];
    }

    for (int i = array.size() - 2; i >= 0; i--)
    {
        productsOfNumbersFromRightToCurrent[i] = array[i] * productsOfNumbersFromRightToCurrent[i + 1];
    }

    std::vector<int> result(array.size(), 1);

    for (int i = 0; i < array.size(); i++)
    {
        if (i > 0)
        {
            result[i] *= productsOfNumbersFromLeftToCurrent[i - 1];
        }

        if (i < array.size() - 1)
        {
            result[i] *= productsOfNumbersFromRightToCurrent[i + 1];
        }
    }

    return result;
}
