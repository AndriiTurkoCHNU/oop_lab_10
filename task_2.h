#ifndef OOP_LAB_10_TASK_2_H
#define OOP_LAB_10_TASK_2_H

#include <vector>
#include <unordered_map>

using namespace std;


int totalTimeRequired(vector<int>& tasks, int cooldown) {
    unordered_map<int, int> lastExecutionTime;
    int time = 0;

    for (int task : tasks) {
        if (lastExecutionTime.count(task) > 0) {
            int waitTime = cooldown - (time - lastExecutionTime[task] - 1);
            if (waitTime > 0) {
                time += waitTime;
            }
        }
        lastExecutionTime[task] = time;
        time++;
    }

    return time;
}

#endif //OOP_LAB_10_TASK_2_H
