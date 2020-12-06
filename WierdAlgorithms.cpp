#include <bits/stdc++.h>
using namespace std;
void solve(long  n)
{
    cout<<n<<" ";
    if(n==1)
    {
        return;
    }
    if(n%2==0)
    {
        n=n/2;
    }
    else
    {
        n=n*3 + 1;
    }
    solve(n);
}
int main() {
	// your code goes here
	long n;
	cin>>n;
	solve(n);
	return 0;
}
