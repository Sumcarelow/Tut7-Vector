#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> myVector;
	vector<int> ::iterator Sam;

	for (int i = 0; i <= 20; i++)
	{
		myVector.push_back(rand() % 100 + 1);
	}

	for (int c = 0; c <= 20; c++)
	{
		cout << myVector[c] << endl;
	}
	system("pause");
	return 0;

}