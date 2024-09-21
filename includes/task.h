#ifndef TAASK_H
#define TASK_H

#include <string>
#include <vector>

struct Task {
    int id;
    std::string name;
    std::string deadline;
    bool completed;

};

void createTask(const Task &task);
void readTasks();

#endif