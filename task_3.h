#ifndef OOP_LAB_10_TASK_3_H
#define OOP_LAB_10_TASK_3_H

#include <vector>
#include <algorithm>

using namespace std;

vector<int> playerRanks(vector<int>& scores) {
    vector<int> sorted_scores = scores;
    sort(sorted_scores.begin(), sorted_scores.end(), greater<int>());

    unordered_map<int, int> rank_map;
    int rank = 1;
    for (int sorted_score : sorted_scores) {
        if (rank_map.find(sorted_score) == rank_map.end()) {
            rank_map[sorted_score] = rank;
            rank++;
        }
    }

    for (int &score : scores) {
        score = rank_map[score];
    }

    return scores;
}

#endif //OOP_LAB_10_TASK_3_H
