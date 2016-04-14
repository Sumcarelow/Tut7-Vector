#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	vector<int> myVector;
	vector<int> ::iterator Sam;
	vector<int>::iterator nto;

	for (int i = 0; i <= 19; i++)
	{
		myVector.push_back(rand() % 100 + 1);
	}

	for (Sam = myVector.begin(); Sam <= myVector.end(); Sam++)
	{
		cout << Sam << endl;
	}

	cout << endl;

	sort(myVector.begin(), myVector.end());

	for (nto = myVector.begin(); nto <= myVector.end(); nto++)
	{
		cout << nto << endl;
	}

	system("pause");
	return 0;

}