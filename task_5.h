#ifndef OOP_LAB_10_TASK_5_H
#define OOP_LAB_10_TASK_5_H

#include <vector>
#include <string>

using namespace std;

vector<string> letterCombinations(const string& digits) {
    vector<string> res;
    if (digits.empty())
        return res;
    vector<string> dict{"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    res.emplace_back("");
    for (char digit : digits) {
        int n = res.size();
        string str = dict[digit - '2'];
        for (int j = 0; j < n; ++j) {
            string tmp = res.front();
            res.erase(res.begin());
            for (char k : str) {
                res.push_back(tmp + k);
            }
        }
    }
    return res;
}

#endif //OOP_LAB_10_TASK_5_H
