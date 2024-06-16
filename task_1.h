#ifndef OOP_LAB_10_TASK_1_H
#define OOP_LAB_10_TASK_1_H

#include <string>
#include <unordered_map>
#include <climits>

using namespace std;

string minWindow(string str, const string& subStr) {
    unordered_map<char, int> map;
    for (auto c : subStr) {
        map[c]++;
    }
    int counter = map.size();
    int begin = 0, end = 0;
    int head = 0;
    int len = INT_MAX;

    while (end < str.size()) {
        char c = str[end];

        if (map.count(c)) {
            map[c]--;
            if (map[c] == 0) {
                counter--;
            }
        }
        end++;

        while (counter == 0) {
            if (end - begin < len) {
                len = end - begin;
                head = begin;
            }
            char tempc = str[begin];
            if (map.count(tempc)) {
                map[tempc]++;
                if (map[tempc] > 0)
                {
                    counter++;
                }
            }
            begin++;
        }
    }
    if (len == INT_MAX) {
        return "";
    }
    return str.substr(head, len);
}

#endif //OOP_LAB_10_TASK_1_H
