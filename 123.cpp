#include <iostream>
#include <string>  // Profile creation, Workout and Diet plans
#include <fstream> // File handling
using namespace std;

void displayMenu();
void createProfile(string& name, int& age, double& weight, double& height, string& goal);
void viewWorkoutPlan(string& goal);
void viewDietPlan(string& goal);
void calculateBMI(double weight, double height);
void saveData(const string& name, int age, double weight, double height, const string& goal);
void loadData(string& name, int& age, double& weight, double& height, string& goal);

int main() {
    string name, goal;
    int age = 0;
    double weight = 0, height = 0;
    int choice;

    cout << "\n\t\t\t\t\t\t\t\t--- | Diet and Workout Planner System | ---\n";
    cout << " \t\t\t\t\t\t\t\t\t--- | A Simple C++ Program | ---\n";
    cout << "======================================";
    cout << "\nAbout the Program:\n";
    cout << "-You can create your profile and save your data." << endl;
    cout << "-You get suggested workout and diet plans based on your needs." << endl;
    cout << "-You can calculate your BMI as well." << endl;
    cout << "-Through this program you can achieve fitness and mantain healthy lifestyle." << endl;
    cout << "-This is a simple yet very effective program if used properly." << endl;
    cout << "-This was created by three lame useless chill guys." << endl;
    cout << "======================================" << endl;
    cout << "\nHello Friends! Welcome to the program.\n\nMenu:\n";
    cout << "------";
    do {
        displayMenu();
        cout << "\nEnter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            createProfile(name, age, weight, height, goal);
            break;
        case 2:
            viewWorkoutPlan(goal);
            break;
        case 3:
            viewDietPlan(goal);
            break;
        case 4:
            calculateBMI(weight, height);
            break;
        case 5:
            saveData(name, age, weight, height, goal);
            break;
        case 6:
            loadData(name, age, weight, height, goal);
            break;
        case 7:
            cout << "Functionality to update workout plans based on user needs is under development.";
            break;
        case 8:
            cout << "Functionality to update diet plans based on user needs is under development.";
            break;
        case 9:
            cout << "Exiting the program. Thank you!\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 9);

    return 0;
}

void displayMenu() {
    cout << "\n1. Create Profile\n";
    cout << "2. View Workout Plan\n";
    cout << "3. View Diet Plan\n";
    cout << "4. Calculate BMI\n";
    cout << "5. Save Data\n";
    cout << "6. Load Data\n";
    cout << "7. Update Workout Plan\n";
    cout << "8. Update Diet Plan\n";
    cout << "9. Exit\n";
}

void createProfile(string& name, int& age, double& weight, double& height, string& goal) {
    cout << "\nEnter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your weight (kg): ";
    cin >> weight;
    cout << "Enter your height (m): ";
    cin >> height;
    cin.ignore();
    cout << "Enter your fitness goal (e.g., weight loss, muscle gain, general fitness): ";
    getline(cin, goal);

    cout << "\nProfile created successfully!\n";
    cout << "Name: " << name << "\nAge: " << age << "\nWeight: " << weight << " kg\nHeight: " << height << " m\nGoal: " << goal << "\n";
}

void viewWorkoutPlan(string& goal) {
    if (goal.empty()) {
        cout << "\nPlease create a profile first to view a diet plan.\n";
        return;
    }

    cout << "\n--- Workout Plan for Goal: " << goal << " ---\n";
    if (goal == "muscle gain" || goal == "Muscle gain") {
        cout << "Monday: Upper body (bench press, pull-ups)" << endl;
        cout << "Tuesday: Lower body (squats, leg press)" << endl;
        cout << "Wednesday: Core (planks, weighted crunches)" << endl;
        cout << "Thursday: Arms (bicep curls, tricep dips)" << endl;
        cout << "Friday: Back (deadlifts, lat pulldowns)" << endl;
        cout << "Saturday: Full-body (push-ups, kettlebell swings)" << endl;
        cout << "Sunday: Stretching for 20 minutes + Rest for recovery" << endl;
    }
    else if (goal == "weight loss" || goal == "Weight loss") {

        cout << "Monday: 30 minutes of jogging" << endl;
          cout << "Tuesday: 15 minutes of HIIT(high - intensity interval training)" << endl;
          cout << "Wednesday: Core exercises to lose belly fat" << endl;
          cout << "Thursday: Lower body workout (3 sets of 15 step-ups, glute bridges, and calf raises)" << endl;
          cout << "Friday: 30 minutes of swimming or dancing" << endl;
          cout << "Saturday: Full-body circuit (3 sets of push-ups, squats, and planks)" << endl;
          cout << "Sunday: Stretching for 20 minutes + Rest for recovery" << endl;
    }
    else if (goal == "general fitness"||goal=="General fitness") {
        cout << "Monday: 30 minutes of jogging" << endl;
          cout << "Tuesday: 15 minutes of HIIT(high - intensity interval training)" <<endl;
          cout << "Wednesday: Core exercises to lose belly fat" <<endl;
          cout << "Thursday: Lower body workout (3 sets of 15 step-ups, glute bridges, and calf raises)"<< endl;
          cout << "Friday: 30 minutes of swimming or dancing" << endl;
          cout << "Saturday: Full-body circuit (3 sets of push-ups, squats, and planks)" << endl;
          cout << "Sunday: Stretching for 20 minutes + Rest for recovery" << endl;
        }
    else {
        cout << "Custom goal not recognized. Try general fitness activities.\n";
    }
}

void viewDietPlan(string& goal) {
    if (goal.empty()) {
        cout << "\nPlease create a profile first to view a workout plan.\n";
        return;
    }

    cout << "\n--- Diet Plan for Goal: " << goal << " ---\n";
    if (goal == "muscle gain"||goal=="Muscle gain") 
        {
            cout << "Monday: Grilled chicken, rice, broccoli" << endl;
               cout << "Tuesday: Beef steak, mashed potatoes, carrots" << endl;
               cout << "Wednesday: Eggs, whole-grain toast, avocado" << endl;
               cout << "Thursday: Chicken, pasta, green beans" << endl;
               cout << "Friday: Salmon, quinoa (or rice), asparagus" << endl;
               cout << "Saturday: Cottage cheese, whole-grain bread, salad" << endl;
               cout << "Sunday: Chicken soup, rice, banana" << endl;
        }
    else if (goal == "weight loss"|| goal=="Weight loss") 
         {
        cout << "Monday: Chicken, rice, vegetables" << endl;
                cout << "Tuesday: Fish, potatoes, salad" << endl;
                cout << "Wednesday: Eggs, bread, greens " << endl;
                cout << "Thursday: Beef, rice, stir-fried vegetables" << endl;
                cout << "Friday: Salmon, broccoli, mashed potatoes" << endl;
                cout << "Saturday: Lentils, salad, chapati" << endl;
                cout << "Sunday: Soup, bread, fruit" << endl;
        }
    else if (goal == "general fitness"|| goal=="General fitness") 
         {
        cout << "Monday: Grilled chicken, rice, vegetables" << endl;
           cout << "Tuesday: Fish, potatoes, salad" << endl;
           cout << "Wednesday: Egg omelet, toast, greens" << endl;
           cout << "Thursday: Beef, rice, stir-fried vegetables" << endl;
           cout << "Friday: Chicken, sweet potato, steamed vegetables" << endl;
           cout << "Saturday: Lentils, salad, chapati" << endl;
           cout << "Sunday: Vegetable soup, bread, fruit" << endl;
        }
    else {
        cout << "Custom goal not recognized. Try general diet.\n";
    }
}
void calculateBMI(double weight, double height) {
    if (height == 0) {
        cout << "\nNo profile created. Create profile first.\n";
        return;
    }

    double bmi = weight / (height * height);
    cout << "Your BMI is: " << bmi << "\n";

    if (bmi < 18.5) {
        cout << "You are underweight.\n";
    }
    else if (bmi < 24.9) {
        cout << "You have a normal weight.\n";
    }
    else if (bmi < 29.9) {
        cout << "You are overweight.\n";
    }
    else {
        cout << "You are obese.\n";
    }
}

void saveData(const string& name, int age, double weight, double height, const string& goal) {
    ofstream file("profile.txt", ios::app);
    if (!file) {
        cout << "Error opening file to save data.\n";
        return;
    }

    file << name << endl;       
    file << age << endl;    
    file << weight << endl;
    file << height << endl;     
    file << goal << endl;       

    file.close();
    cout << "Profile data saved successfully.\n";
}

void loadData(string& name, int& age, double& weight, double& height, string& goal) {
    ifstream file("profile.txt");
    if (!file) {
        cout << "\nError loading data. File not found.\n";
        return;
    }


    while (getline(file, name)) {
        file >> age;
        file >> weight;
        file >> height;
        file.ignore();  
        getline(file, goal);

        cout << "\nProfile:\n";
        cout << "Name: " << name << "\nAge: " << age << "\nWeight: " << weight << " kg\nHeight: " << height << " m\nGoal: " << goal << "\n";
        cout << "==================\n";
    }

    file.close();
    cout << "\nData loaded successfully.\n";
}