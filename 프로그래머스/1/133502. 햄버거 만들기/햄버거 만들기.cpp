#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    int i = 0;
    while ( i + 3 < ingredient.size() ) {
        if (ingredient[i] == 1 && ingredient[i + 1] == 2 && ingredient[i + 2] == 3 && ingredient[i + 3] == 1)
        {
            for (int j = 0; j < 4; ++j) {
                ingredient.erase(ingredient.begin() + i);
            }
            (i > 3 ? i-=3 : i=-1);
            ++answer;
        }
        ++i;
        int sizeNum = ingredient.size();
        if (sizeNum < 4) { break; }
    }
    return answer;
}