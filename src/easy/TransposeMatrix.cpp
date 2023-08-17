#include <vector>

std::vector<std::vector<int>> transposeMatrix(std::vector<std::vector<int>> matrix)
{
    const auto numberOfInputRows = matrix.size();

    const auto numberOfInputColumns = matrix[0].size();

    std::vector<std::vector<int>> transposed(numberOfInputColumns, std::vector<int>(numberOfInputRows, 0));

    for (int i = 0; i < numberOfInputRows; i++)
    {
        for (int j = 0; j < numberOfInputColumns; j++)
        {
            transposed[j][i] = matrix[i][j];
        }
    }

    return transposed;
}
