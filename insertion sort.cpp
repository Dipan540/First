
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define ff first
#define sc second
#define mp make_pair
#define pb push_back
#define pp pop_back
#define nn "\n"



void solve()
{
    ll a;
    cin>>a;
    ll m[a],i,j;
    for(i=0; i<a; i++)
    {
        cin>>m[i];
    }
    //for i = 2 to A.length
    for(i=1; i<a; i++)
    {
        // key = A[i]
        ll key=m[i];
         // j = i - 1
        j=i-1;
         // // Insert A [i] into the sorted sequence A[1.... i-1]
 // while j>0 and A[j] > key
        while(j>=0 && m[j]>key)
        {
            m[j+1]=m[j];// A[j+1] = A[j]
            j--;// j = j - 1

        }
        m[j+1]=key;// A[j + 1] = key

    }
    for(i=0; i<a; i++)
    {
        cout<<m[i]<<" ";
    }


}
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T = 1;
    // cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
