#include <iostream>
#include "task.h"
#include "user.h"

int main(int argc, char const *argv[])
{
    Task newTask = {1, "Task 1,", "2024-09-30", false};
    createTask(newTask);
    std::cout << "Task saved:\n";
    readTasks();

    bool authenticated = authenticateUser("user1", "password123");
    if (authenticated) {
        std::cout << "User authenticated succesfully.\n";
    } else {
        std::cout << "Auhentication failed.\n";
    }
    return 0;
}
