#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    int a = left % n;
    int b = a+right-left+1;
    left = left / n + 1;
    right = right / n + 1;
    for (int i = left; i <= right; ++i) {
        for (int k = 1; k <= i; ++k) {
            answer.push_back(i);
        }
        for (int k = i + 1; k <= n; ++k) {
            answer.push_back(k); //i+1부터 n까지 반복
        }
    }
    vector<int> sliced(answer.begin() + a, answer.begin() +b);
    return sliced;
}