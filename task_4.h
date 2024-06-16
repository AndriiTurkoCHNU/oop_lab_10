#ifndef OOP_LAB_10_TASK_4_H
#define OOP_LAB_10_TASK_4_H

#include <string>
#include <unordered_map>
#include <sstream>

using namespace std;

bool areSentencesSimilar(const string& sentence1, const string& sentence2) {
    unordered_map<string, int> freqMap;
    istringstream iss(sentence1);

    for (string s; iss >> s; ) {
        freqMap[s]++;
    }
    iss.clear();
    iss.str(sentence2);

    for (string s; iss >> s; ) {
        freqMap[s]--;
    }
    bool res = all_of(freqMap.begin(), freqMap.end(),
                      [](const auto& pair) {
                                return pair.second == 0;
                            });

    return res;
}

#endif //OOP_LAB_10_TASK_4_H
