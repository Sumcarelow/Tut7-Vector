#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	vector<int> myVector;
	vector<int> ::iterator Sam;

	for (int i = 0; i <= 19; i++)
	{
		myVector.push_back(rand() % 100 + 1);
	}

	for (int c = 0; c <= 19; c++)
	{
		cout << myVector[c] << endl;
	}

	cout << endl;

	sort(myVector.begin(), myVector.end());

	for (int c = 0; c <= 19; c++)
	{
		cout << myVector[c] << endl;
	}

	system("pause");
	return 0;

}