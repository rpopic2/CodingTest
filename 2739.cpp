#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        s += to_string(i);
        s += '\n';
    }
    cout << s;
    return 0;
}