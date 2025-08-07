#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(),d.end());
    for(int n : d) {
        budget-=n;
        if(budget>=0)++answer;
        else break;
    }
    return answer;
}