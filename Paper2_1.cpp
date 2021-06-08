#include <bits/stdc++.h>

using namespace std;

void check_alter(vector<int> arr)
{    
	int size = arr.size();
	int max = arr[size-1];
	
	cout<<max<< " ";
	
	for (int i = size - 2; i >= 0; i--)
	{
		if (max < arr[i])
		{
			max = arr[i];
			cout<<max<< " ";
		}
	}
}
int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	
	vector<int> v;
	for(int i = 0; i < n; i++)
	{
		int d;
		cin>>d;
		v.push_back(d);
	}
	
	check_alter(v);
	
	return 0;
}
