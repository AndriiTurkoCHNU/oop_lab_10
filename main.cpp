#include <iostream>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"

using namespace std;


int main() {
    // task_1
    string str = "BAAABACAABCA";
    string subStr = "AABC";
    cout << minWindow(str, subStr) << endl;

    // task_2
    vector<int> tasks = {1, 1, 2, 3, 4, 2};
    int cooldown = 3;
    cout << totalTimeRequired(tasks, cooldown) << endl;

    // task_3
    vector<int> scores = {100, 90, 90, 80, 75, 60, 100};
    vector<int> ranks = playerRanks(scores);
    cout << "Ranks: ";
    for (const auto& rank : ranks) {
        cout << rank << " ";
    }
    cout << endl;

    // task_4
    string sentence1 = "This is a sentence";
    string sentence2 = "This is not a sentence";
    string result = areSentencesSimilar(sentence1, sentence2) ? "true" : "false";
    cout << result << endl;

    // task_5
    string digits = "39";
    vector<string> res = letterCombinations(digits);
    cout << "Letter combinations: ";
    for (const auto& s : res) {
        cout << s << " ";
    }

    return 0;
}