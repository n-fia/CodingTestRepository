#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int N;
int visited[21];

int backtrack(const vector<vector<int>>& arr, int member, int index)
{
	if (member == arr.size() / 2)
	{
		int start_result = 0;
		int link_result = 0;
		for (int i = 1; i <= N; i++)
		{
			if (visited[i] == 0)
			{
				for (int j = 1; j <= N; j++)
				{
					if (visited[j] == 0)
					{
						link_result += arr[i][j];
					}
				}
			}
			else if (visited[i] == 1)
			{
				for (int j = 1; j <= N; j++)
				{
					if (visited[j] == 1)
					{
						start_result += arr[i][j];
					}
				}
			}
		}

		return abs(start_result - link_result);
	}

	int minNum = 1000000;
	for (int i = index; i <= N; i++)
	{
		if (visited[i] == 0)
		{
			visited[i] = 1;
			minNum = min(minNum, backtrack(arr, member + 1, i + 1));
			visited[i] = 0;
		}
	}

	return minNum;
}

int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> N;
	vector<vector<int>> arr(N + 1, vector<int>(N + 1, 0));

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			cin >> arr[i][j];
		}
	}

	int result = backtrack(arr, 0, 1);

	cout << result << endl;
	
	return 0;
}