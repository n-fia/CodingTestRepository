#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    string temp;
    for(int j=1; j<strings.size();++j){
        for(int i=0; i<strings.size()-j;++i){
            int m=-1;
            char str1 = strings[i][n];
            char str2 = strings[i+1][n];
        while(str1==str2){
            ++m;
            if(m==strings[i].length()){break;}
            str1 = strings[i][m];
            str2 = strings[i+1][m];
        }
        if(str1>str2){
            temp=strings[i+1];
            strings[i+1]=strings[i];
            strings[i]=temp;
        }
        }
    }
    
    return strings;
}