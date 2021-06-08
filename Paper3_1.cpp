#include <bits/stdc++.h>

using namespace std;

void Union(vector<int> a,vector<int> b)
{
	int i = 0, j = 0,m = a.size(),n = b.size();
	
	while (i < m && j < n) {
		if (a[i] < b[j])
			cout << a[i++] << " ";

		else if (b[j] < a[i])
			cout << b[j++] << " ";

		else {
			cout << b[j++] << " ";
			i++;
		}
	}

	while (i < m)
		cout << a[i++] << " ";

	while (j < n)
		cout << b[j++] << " ";
}


void Intersection(vector<int> a,vector<int> b)
{
    int i = 0, j = 0,m = a.size(),n = b.size();
    while (i < m && j < n) {
        if (a[i] < b[j])
            i++;
        else if (b[j] < a[i])
            j++;
        else 
        {
            cout << b[j] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
	int n,m;
	cout<<"Enter the size of the array 1 and array 2"<<endl;
	cin>>n>>m;
	cout<<"Enter array "<<endl;
	vector<int> v;
	for(int i = 0; i < n; i++)
	{
		int d;
		cin>>d;
		v.push_back(d);
	}
	cout<<"Enter array "<<endl;	
	vector<int> v1;
	for(int i = 0; i < m; i++)
	{
		int d;
		cin>>d;
		v1.push_back(d);
	}
	
	Union(v,v1);
	cout<<endl;
	Intersection(v,v1);
	
	return 0;
}
