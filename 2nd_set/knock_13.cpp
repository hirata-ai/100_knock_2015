//knock_13.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <list>
using namespace std;

void marge_file(ifstream &file1, ifstream &file2, string &output_name){ //コピーをするわけではないので参照呼び出しをしないといけない
    ofstream ofs_output(output_name);
    string str;
    list<string> col1_lst;
    list<string> col2_lst;
    while(getline(file1, str)){
        col1_lst.push_back(str);
    }
    while(getline(file2, str)){
        col2_lst.push_back(str);
    }
    auto col2_itr = col2_lst.begin();
    for(auto col1_itr = col1_lst.begin(); col1_itr != col1_lst.end(); ++col1_itr){
        // cout << *col1_itr << "\t" << *col2_itr << endl;
        ofs_output << *col1_itr << "\t" << *col2_itr << endl;
        col2_itr++;
    }
}

int main(){
    string str("output_13.txt");
    ifstream col1_file("col1.txt");
    ifstream col2_file("col2.txt");
    marge_file(col1_file, col2_file, str);
}
