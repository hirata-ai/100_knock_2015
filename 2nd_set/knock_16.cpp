//knock16.cpp
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

void split_file(ifstream &file, int split_no){
    string str;
    int count;
    int sent_count = 1;
    int file_no    = 1;
    vector<string> file_vector;
    while(getline(file, str)){
        file_vector.push_back(str);
    }
    int one_fileno = file_vector.size() / split_no;
    cout << "file_count:" << file_vector.size() << endl;
    cout << "one_fileno:" << one_fileno << endl;
    auto vector_itr = file_vector.begin();
    while(vector_itr != file_vector.end()){
        cout << file_no << "  " << sent_count << *vector_itr << endl;
        vector_itr++;
        sent_count++;
        if(sent_count > one_fileno and file_no < split_no){
            sent_count = 1;
            file_no++;
        }
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
    split_file(ifs_open, count);
}
