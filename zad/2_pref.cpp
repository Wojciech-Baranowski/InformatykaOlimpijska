#include<bits/stdc++.h>
using namespace std;

int tab[1000000];
int p[1000000];
int n;
int k;
int a;
int b;

int main()
{
	cin >> n;
	cin >> k;
	for(int i = 0; i < n;i++) 
	{ 
		cin >> tab[i]; 
	}
	p[0] = tab[0];
	for(int i = 1; i < n;i++) 
	{ 
		p[i] = p[i-1] + tab[i];
	}
	
	for(int i = 0; i < k; i++)
	{
		cin >> a;
		cin >> b;
		int temp = 0;
		if(a-2 >= 0) 
		{
			temp = p[a-2];
		}
		cout << p[b-1] - temp << endl;
	}
	
	return 0;
}


