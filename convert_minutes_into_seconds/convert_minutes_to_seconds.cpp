#include <iostream>

using namespace std;

int convert (int minutes) {
    return minutes * 60;
}

int main() {
    int minutes;
    cin >> minutes;
    cout << convert(minutes);
}