#include <algorithm>
#include <vector>

bool classPhotos(std::vector<int> redShirtHeights, std::vector<int> blueShirtHeights)
{
    std::sort(redShirtHeights.begin(), redShirtHeights.end());

    std::sort(blueShirtHeights.begin(), blueShirtHeights.end());

    const auto firstRedShirtStudentHeight = redShirtHeights[0];
    const auto firstBlueShirtStudentHeight = blueShirtHeights[0];

    const auto redShirtsShouldBeInFirstRow = firstRedShirtStudentHeight > firstBlueShirtStudentHeight;

    const auto blueShirtsShouldBeInFirstRow = !redShirtsShouldBeInFirstRow;

    for (int i = 0; i < redShirtHeights.size(); i++)
    {
        if (redShirtsShouldBeInFirstRow && redShirtHeights[i] <= blueShirtHeights[i])
        {
            return false;
        }

        if (blueShirtsShouldBeInFirstRow && blueShirtHeights[i] <= redShirtHeights[i])
        {
            return false;
        }
    }

    return true;
}
