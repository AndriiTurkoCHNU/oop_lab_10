#include <iostream>
#include "task_1.h"
#include "task_3.h"
#include "task_4.h"

using namespace std;


int main() {
    // task_1
    string str = "BAAABACAABCA";
    string subStr = "AABC";
    cout << minWindow(str, subStr) << endl;

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

    return 0;
}