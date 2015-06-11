//knock_15.cpp
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void tail_line(ifstream &file, int line_no){
    string str;
    int count;
    vector<string> file_vector;
    while(getline(file, str)){
        file_vector.push_back(str);
    }
    for(int i = line_no; i > 0; i--){
        cout << file_vector[file_vector.size() - i] << endl;
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
    tail_line(ifs_open, count);
}
