#include <iostream>

using namespace std;

string alphabet = "abcdefghijklmnopqrstuvwxyz";

string replace(string text, string interval) {
    int initial, final;
    string result;

    for (int i = 0; i < alphabet.length(); i++) 
    {
        if (alphabet[i] == interval[0]) 
        {
            initial = i;
        } 
        else if (alphabet[i] == interval[2]) 
        {
            final = i;
        }
    }

    for (int e = 0; e < text.length(); e++) 
    {
        for (int i = initial; i <= final; i++)
        {
            if (text[e] == alphabet[i]) 
            {
                result = result + "#";
                break;
            } 

            if (i == final) {
                result = result + text[e];
            }
        }
    }

    return result;
}

int main () {
    string test = replace("saulo joab bobinho", "a-c");
    cout << test << endl;
}