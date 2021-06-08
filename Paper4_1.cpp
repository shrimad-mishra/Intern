#include <bits/stdc++.h>
using namespace std;

bool comp(int x, int y)
{
	return abs(x) < abs(y) ? true : false;
}

void find(int arr[], int n)
{
	sort(arr, arr + n, comp);
	
	int min = INT_MAX, x, y;
	
	for (int i = 1; i < n; i++) 
	{
		if (abs(arr[i - 1] + arr[i]) <= min) 
		{
			min = abs(arr[i - 1] + arr[i]);
			x = i - 1;
			y = i;
		}
	}
	cout << "The two elements whose sum is minimum are "
		<< arr[x] << " and " << arr[y] << endl;
}

int main()
{

	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	
	int v[n];
	cout<<"Enter the array"<<endl;
	for(int i = 0; i < n; i++)
	{
		cin>>v[i];
	}
	
	find(v,n);
	
	return 0;
}
