#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

int optimalFreelancing(std::vector<std::unordered_map<std::string, int>> jobs)
{
    std::sort(jobs.begin(), jobs.end(),
              [](const auto& info1, const auto& info2) { return info1.at("payment") > info2.at("payment"); });

    int profit = 0;

    std::vector<bool> busyDays(7, false);

    for (const auto& job : jobs)
    {
        const auto maxTime = std::min(job.at("deadline"), 7);

        for (int i = maxTime; i > 0; i--)
        {
            if (!busyDays[i - 1])
            {
                profit += job.at("payment");
                busyDays[i - 1] = true;
                break;
            }
        }
    }

    return profit;
}
