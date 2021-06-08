#include <bits/stdc++.h>
using namespace std;

int Dist(vector<int> arr, int x, int y)
{
	int n = arr.size();
	int index = -1, min_d = INT_MAX;
	
	for(int i = 0 ; i<n ; i++)
	{
		if(arr[i]==x || arr[i]==y)
		{
			if( index != -1 && arr[i] != arr[index])
				min_d = min(min_d , i - index);
			index = i;
		}
	}

	if(min_d == INT_MAX)
		return -1;

	return min_d;
}

int main()
{
	int n;
	cout<<"Enter the size of the array"<<endl;
	cin>>n;
	
	vector<int> arr;
	cout<<"Enter the array"<<endl;
	for(int i = 0; i < n; i++)
	{
		int d;
		cin>>d;
		arr.push_back(d);
	}
	
	int x, y;
	cout<<"Enter the value of X and Y "<<endl;
	cin>>x>>y;
	
	cout << "Minimum distance between " <<x<<" and " << y << " is "<<Dist(arr,x,y) << endl;
	return 0;
}
