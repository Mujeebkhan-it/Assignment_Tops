//Assume a class cricketer is declared. Declare a derived class batsman
//from cricketer. Data member of batsman. Total runs, Average runs and
//best performance. Member functions input data, calculate average
//runs, Displaydata.(Single Inheritance)

#include <iostream>
#include <iomanip>
using namespace std;

class Cricketer 
{
protected:
    string name;
    int matches;

public:
    Cricketer(const string& name = "", int matches = 0) : name(name), matches(matches) {}

    void inputCricketerData() {
        cout << "Enter cricketer's name: ";
        cin >> name;
        cout << "Enter number of matches: ";
        cin >> matches;
    }

    void displayCricketerData() const {
        cout << "Cricketer's Name: " << name << endl;
        cout << "Number of Matches: " << matches << endl;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;

public:
    Batsman(const string& name = "", int matches = 0, int totalRuns = 0, float averageRuns = 0.0, int bestPerformance = 0)
        : Cricketer(name, matches), totalRuns(totalRuns), averageRuns(averageRuns), bestPerformance(bestPerformance) {}

    void inputData() {
        inputCricketerData();
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance (highest score in a match): ";
        cin >> bestPerformance;
        calculateAverageRuns();
    }

    void calculateAverageRuns() {
        if (matches > 0)
            averageRuns = static_cast<float>(totalRuns) / matches;
        else
            averageRuns = 0.0;
    }

    void displayData() const {
        displayCricketerData();
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << fixed << setprecision(2) << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() 
{
    Batsman batsman;
    batsman.inputData();
    batsman.displayData();

    return 0;
}

