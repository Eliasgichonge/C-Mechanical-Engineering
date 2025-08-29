#include <iostream>
using namespace std;

class ScoreManager {
public:
    void acceptScores() {
        int scores[8], highest = 0;
        cout << "Enter scores for 8 subjects:" << endl;
        for (int i = 0; i < 8; ++i) {
            cin >> scores[i];
            if (scores[i] > highest) highest = scores[i];
        }
        cout << "Scores: ";
        for (int i = 0; i < 8; ++i) {
            cout << scores[i] << " ";
        }
        cout << "\nHighest score: " << highest << endl;
    }
};

int main() {
    ScoreManager manager;
    manager.acceptScores();
    return 0;
}