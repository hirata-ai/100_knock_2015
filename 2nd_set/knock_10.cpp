//knock_10.cpp
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]){
    ifstream ifs(argv[1]);
    string str;
    int count = 0;
    if (ifs.fail()){
        cerr << "fail" << endl;
        return -1;
    }
    while (getline(ifs, str)){
        count++;
    }
    cout << count << " lines " << endl;
    return 0;
}
