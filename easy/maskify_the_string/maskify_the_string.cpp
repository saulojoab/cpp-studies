#include <iostream>

using namespace std;

string maskify(string s) {
    string masked = "";
    for (int i = 0; i < s.length(); i++)
    {
        if (i < (s.length() - 4)) 
        {
            masked = masked + "#";
        }
        else 
        {
            masked = masked + s[i];
        }
    }

    return masked;
}

int main () {
    string number;

    cin >> number;

    cout << maskify(number) << endl;

    return 0;
}