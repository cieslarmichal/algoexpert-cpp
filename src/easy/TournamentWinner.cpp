#include <string>
#include <unordered_map>
#include <vector>

std::string tournamentWinner(std::vector<std::vector<std::string>> competitions, std::vector<int> results)
{
    std::string tournamentWinner;

    int tournamentWinnerPoints = 0;

    std::unordered_map<std::string, int> teamsToPointsMapping;

    for (int i = 0; i < competitions.size(); i++)
    {
        const auto homeTeam = competitions[i][0];

        const auto awayTeam = competitions[i][1];

        const auto competitionWinner = results[i] == 1 ? homeTeam : awayTeam;

        teamsToPointsMapping[competitionWinner] += 3;

        if (teamsToPointsMapping[competitionWinner] > tournamentWinnerPoints)
        {
            tournamentWinner = competitionWinner;

            tournamentWinnerPoints = teamsToPointsMapping[competitionWinner];
        }
    }

    return tournamentWinner;
}
