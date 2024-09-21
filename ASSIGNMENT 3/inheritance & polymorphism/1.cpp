// Q.1  Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, 
// Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance) 

#include <iostream>
using namespace std;

class Cricketer 
{
public:
    void inputData() 
    {
        
        cout << "Enter name of the cricketer: ";
        cin >> name;
    }

    void displayData() 
    {
        cout << "Name: " << name << endl;
    }

protected:
    string name;
};

class Batsman : public Cricketer 
{
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    void inputData() 
    {
        Cricketer::inputData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }

    void calculateAverageRuns() 
    {
        int numberOfMatches = 10;
        averageRuns = static_cast<float>(totalRuns) / numberOfMatches;
    }

    void displayData()
    {
        Cricketer::displayData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputData();
    batsman.displayData();
    return 0;
}
