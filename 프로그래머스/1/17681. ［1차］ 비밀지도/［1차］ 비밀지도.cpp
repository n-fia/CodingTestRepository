#include <string>
#include <vector>

using namespace std;

vector<string> calculate(int n, vector<int> arr){
    vector<string> answer;
    int m=1, t=n;
    while(--t){
        m+=m;
    }
    
    for(int i= 0; i<n; ++i){
        string str = "";
        for(int j=m; j>0; j/=2){
            if(arr[i]-j>=0){
                arr[i]-=j;
                str +="#";
            }
            else{
                str +=" ";
            }
        }
        answer.push_back(str);
    }
    return answer;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    vector<string> str1 = calculate(n, arr1);
    vector<string> str2 = calculate(n, arr2);
    for(int i=0; i<n; ++i){
        string str = "";
        for(int j=0; j<n; ++j){
            if(str1[i][j]=='#' || str2[i][j]=='#'){
                str+="#";
            }
            else{
                str+=" ";
            }
        }
        answer.push_back(str);
    }
    
    return answer;
}