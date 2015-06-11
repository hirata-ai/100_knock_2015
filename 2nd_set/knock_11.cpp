//knock_11.cpp
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string replace(string str1, string str2, string str3){    //str1:original string, str2:old letter, str3:nrew letter
    string re_str;
    while (str1.find(str2,0) != string::npos){
        re_str = str1.replace(str1.find(str2,0), str2.length(), str3);
    } 
    //cout << re_str << endl;
    return re_str;
}

int main(int argc, char *argv[]){
    ifstream ifs(argv[1]);
    string str;
    string str_tab = "\t";
    string str_space = " ";
    if (ifs.fail()){
        cerr << "error" << endl;
        return -1;
    }
    while (getline(ifs, str)){
        string re_str = replace(str, str_tab, str_space);   //タブと空白の置換なので，文字コードなどは気にしないことにした
        cout << re_str << endl;
    }

    return 0;
}
