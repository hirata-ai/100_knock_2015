//knock_14.cpp
#include <iostream>
#include <fstream>
using namespace std;

void head_line(ifstream &file, int line_no){
    string str;
    int count;
    while(getline(file, str) and count < line_no){
        cout << str << endl;
        count ++;
    }
}

int main(int argc, char *argv[]){
    int count;
    ifstream ifs_open(argv[1]); 
    if(ifs_open.fail()){
        cerr << "file open error" << endl;
        return -1;
    }
    cout << "input to number:";
    cin >> count;
    head_line(ifs_open, count);
}
