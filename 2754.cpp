#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string grade;
    cin >> grade;

    float result = 0;
    char alph = grade[0];
    char sec = grade[1];

    switch (alph)
    {
    case 'A':
        result = 4;
        break;
    case 'B':
        result = 3;
        break;
    case 'C':
        result = 2;
        break;
    case 'D':
        result = 1;
        break;
    }

    switch (sec)
    {
    case '-':
        result -= 0.3f;
        break;
    case '+':
        result += 0.3f;
        break;
    }
    cout << fixed << setprecision(1) << result;
    return 0;
}
