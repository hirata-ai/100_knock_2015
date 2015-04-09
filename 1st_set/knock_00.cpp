//knock_00.cpp
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string test_str("stressed");
    for (int i = test_str.size() -1 ; i >= 0; i--)
        cout << test_str[i];
    //for (int i = 0; i < 10; ++i)
    //    cout << test_str[i];
    //cout << test_str[7];
    cout << endl;
}
