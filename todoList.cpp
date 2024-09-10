#include <iostream>
#include <vector>
#include <string>

// Task class definition
class Task {
private:
    std::string description;
    bool completed;

public:
    Task(const std::string& desc) : description(desc), completed(false) {}

    void markAsCompleted() {
        completed = true;
    }

    std::string getDescription() const {
        return description;
    }

    bool isCompleted() const {
        return completed;
    }
};

// ToDoList class definition
class ToDoList {
private:
    std::vector<Task> tasks;

public:
    void addTask(const std::string& description) {
        tasks.push_back(Task(description));
    }

    void markTaskAsCompleted(int index) {
        if (index >= 0 && index < tasks.size()) {
            tasks[index].markAsCompleted();
        } else {
            std::cout << "Invalid task index.\n";
        }
    }

    void showTasks() const {
        if (tasks.empty()) {
            std::cout << "No tasks available.\n";
            return;
        }
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << i + 1 << ". " << tasks[i].getDescription();
            if (tasks[i].isCompleted()) {
                std::cout << " [Completed]";
            }
            std::cout << "\n";
        }
    }
};
int main() {
    ToDoList todoList;
    int choice;
    std::string description;
    int index;

    do {
        std::cout << "\nTo-Do List Application\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. Mark Task as Completed\n";
        std::cout << "3. Show Tasks\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // To ignore the newline character left in the buffer

        switch (choice) {
            case 1:
                std::cout << "Enter task description: ";
                std::getline(std::cin, description);
                todoList.addTask(description);
                std::cout << "Task added.\n";
                break;

            case 2:
                std::cout << "Enter task number to mark as completed: ";
                std::cin >> index;
                todoList.markTaskAsCompleted(index - 1);
                std::cout << "Task marked as completed.\n";
                break;

            case 3:
                todoList.showTasks();
                break;

            case 4:
                std::cout << "Exiting...\n";
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";
                break;
        }
    } while (choice != 4);

    return 0;
}
