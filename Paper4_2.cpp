#include <bits/stdc++.h>

using namespace std;

int main()
{

	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	
	vector<int> v;
	cout<<"Enter the array"<<endl;
	
	for(int i = 0; i < n; i++)
	{
		int d;
		cin>>d;
		v.push_back(d);
	}
	
	for (int i = 0; i < n; i++) 
	{
		v[v[i] % n] = v[v[i] % n] + n;
	}
	
	cout << "The repeating elements are : " << endl;
	
	for (int i = 0; i < n; i++) 
	{
		if (v[i] >= n * 2) 
		{
			cout << i << " " << endl;
		}
	}
	return 0;
}
