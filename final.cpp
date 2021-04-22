
#include <iostream>
#include <stdlib>
#include <string>
#include <cstring>
using namespace std;

int countLine(string s);
int countChar(string s);
int main(int argc, char *argv[]){
    string str1;
    if (argc = 1){
        countLine("Ohio University");
        countChar("Athens");
    }
    else{
        ifstream file;
        file.open(argv[1].c_str);
        string str2 = " ";
        string temp;
        while (!file.eof()){
            getline(cin, temp);
            str2 += temp;
        }
        countLine(str2);
        countChar(str2);

    }
    
}

int countLine(sting s){
    int total;
    for (int i = 0; i< s.length(); i++){
        if (s[i] == '\n') {
            total++;
        }
    }
    return total;
    
}
int countChar(string s){
    return s.length();
}

