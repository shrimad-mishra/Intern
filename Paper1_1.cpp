#include <bits/stdc++.h>

using namespace std;

void min_2(vector<int> arr)
{
	int i, f, s;

	if (arr.size() < 2)
	{
		cout<<" Invalid Input "<<endl;
		return;
	}

	f = s = INT_MAX;

	for (auto i : arr)
	{
		if (i < f)
		{
			s = f;
			f = i;
		}
		
		else if (i < s && i != f)
			s = i;
	}
	if (s == INT_MAX)
		cout << "There is no second smallest element"<<endl;
	else
		cout << "The smallest element is " << f << " and second "
			"Smallest element is " << s << endl;
}

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
	
	min_2(v);
	
	return 0;
}
