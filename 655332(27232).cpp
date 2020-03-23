#include <iostream>
using namespace std;

int main() {
    int people;
    cout << "人數";
    cin >> people;
    float score[100][100] = {0};
    for(int p = 0; p < people; p++ ) {
        float a = 0;
        for (int sub = 0; sub < 5; sub++) {
            cout << p+1 << "號的第" << sub+1 << "科成績:";
            cin >> score[p][sub];
            a += score[p][sub]; 
    }
    a /= 5;
    score[p][5] = a; 
}
for (int i = 0; i < people; i++) {
    cout << i+1 << "號der平均" << score[i][5] << "\n";
}
for(int i = 0; i < 5; i++) {
    float subject = 0;
    for (int b = 0; b < people; b++){
        subject += score[b][i];
    }
    subject /= people;
    cout << i + 1 << "科平均" << subject << "\n";
}
}