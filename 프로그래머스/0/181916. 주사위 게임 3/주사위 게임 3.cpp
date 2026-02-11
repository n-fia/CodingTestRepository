#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b, int c, int d) {
    int answer = 0;
        
    map<int, int> num_map;
    ++num_map[a];
    ++num_map[b];
    ++num_map[c];
    ++num_map[d];
    
    int s = num_map.size();
    int p=0,q=0,r=0;
    
    switch (s) {
        case 1 :
            return 1111*a;
            break;
        case 2 :
            for(auto m : num_map){
                if(m.second == 3){
                    p=m.first;
                    if(q!=0){
                        return (10*p+q)*(10*p+q);
                    }
                }
                if(m.second == 2){
                    if(q!=0){
                        p=m.first;
                        (p-q<0 ? r=q-p : r=p-q);
                        return (p+q)*r;
                    }
                    else{
                        q=m.first;
                    }
                }
                if(m.second == 1){
                    q=m.first;
                    if(p!=0){
                        answer=(10*p+q)*(10*p+q);
                    }
                }
            }
                break;
        case 3 :
            {
                for(auto m : num_map){
                    if(m.second == 1){
                        if(r==0){
                            r=m.first;
                        }
                        else{
                            q=m.first;
                            return q*r;
                        }
                    }
                }
                break;
            }
        case 4 :
            {
                for(auto m : num_map){
                    return m.first;
                }
                break;
            }
    }
    
    return answer;
}