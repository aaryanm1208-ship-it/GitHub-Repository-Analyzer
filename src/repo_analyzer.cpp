#include <iostream>
using namespace std;

/*
Tool: GitHub Repository Analyzer
Evaluates repository health based on basic metrics
*/

int main() {
    int commits, contributors, openIssues;

    cout << "Commits: ";
    cin >> commits;

    cout << "Contributors: ";
    cin >> contributors;

    cout << "Open Issues: ";
    cin >> openIssues;

    int score = (commits * 2) + (contributors * 10) - (openIssues * 3);

    cout << "\nRepo Health Score: " << score << endl;

    if (score >= 80) {
        cout << "Maturity Level: Production Ready 🚀";
    } else if (score >= 40) {
        cout << "Maturity Level: Actively Maintained ⚙️";
    } else {
        cout << "Maturity Level: Early Stage 🧪";
    }

    return 0;
}
