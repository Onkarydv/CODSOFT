#include <iostream>
#include <vector>
#include <string>

using namespace std;

void displayMenu() {
    cout << "To-Do List :" << endl;
    cout << "1. Add a task" << endl;
    cout << "2. View tasks" << endl;
    cout << "3. Delete a task" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

void addTask(vector<string>& tasks) 
{
    cout << "Enter the task description: ";
    string description;
    cin.ignore();
    getline(cin,description);
    tasks.push_back(description);
    cout << "Tasks added\n\n"<<endl;
}

void viewTasks(const vector<string>& tasks)
 {
    if (tasks.empty())
     {
        cout << "No tasks in the list." << endl;
        return;
    }
    for (size_t i = 0; i < tasks.size(); ++i)
     {
        cout << i + 1 << ". " << tasks[i] << endl;
        cout <<"\n"<<endl;
    }
}

void deleteTask(vector<string>& tasks)
 {
    cout << "Enter the task number to delete: ";
    int taskNumber;
    cin >> taskNumber;
    if (taskNumber < 1 || taskNumber > tasks.size()) 
    {
        cout << "Invalid task number." << endl;
        return;
    }
    tasks.erase(tasks.begin() + taskNumber - 1);
    cout <<"Tasks deleted!\n\n"<<endl;
}

int main()
 {
    vector<string> tasks;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        switch (choice) {
        case 1:
            addTask(tasks);
            break;
        case 2:
            viewTasks(tasks);
            break;
        case 3:
            deleteTask(tasks);
            break;
        case 4:
            cout << "Exiting..." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
