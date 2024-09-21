#include "task.h"
#include <iostream>
#include <fstream>
#include <sstream>

void createTask(const Task &task) {
    std::ofstream file ("task.csv", std::ios::app);

    if (file.is_open()) {
        file << task.id << "," << task.name << "," << task.deadline << ", " << (task.completed ? "1" : "0") << "\n";
        file.close();
    } else {
        std::cerr << "Unable to open file tasks.csv\n";
    }
}

void readTasks() {
    std::ifstream file("tasks.csv");
    std::string line;

    if (file.is_open()) {
        while (std::getline(file, line)) {
            std::istringstream ss(line);
            std::string id, name, deadline, completed;
            std::getline(ss, id, ',');
            std::getline(ss, name, ',');
            std::getline(ss, deadline, ',');
            std::getline(ss, completed, ',');

            std::cout << "ID: " << id << ", Name: " << name << ", Deadline: " << deadline << ", Completed: " << (completed = "1" ? "Yes" : "No") << "\n"; 
        }
        file.close();
    } else {
        std::cerr << "Unable to opne file tasks.csv\n";
    }
}