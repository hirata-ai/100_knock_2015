//knock_12.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <typeinfo> 
#include <sstream>
using namespace std;

int main(int argc, char *argv[]){
    ifstream ifs_open(argv[1]);
    ofstream ofs_col1("col1.txt");
    ofstream ofs_col2("col2.txt");
    string str;
    if(ifs_open.fail()){
        cerr << "file open error" << endl;
        return -1;
    }
    while(getline(ifs_open, str)){
        string words;
        int words_count = 0;
        //cout << str << endl;
        istringstream sstr(str);
        while(getline(sstr, words, '\t')){  //getlineの第一引数はistreamに変換しないといけない
            if(words_count == 0)
                ofs_col1 << words << endl;
            else if(words_count == 1)
                ofs_col2 << words << endl;
            words_count++;
        }
    }
}
