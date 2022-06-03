#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main() {
    
    
    //Link del problema resuelto : https://omegaup.com/arena/problem/El-castigo-de-Aveam/#problems
    
    int n;
    int m;
    int x;
    int arr[10000] = {0};

    vector<int>v;

    cin>>n>>m;

    for(int i = 0; i<n*m; i++)
    {
        cin>>x;
        if(arr[x] == 0)
        {
           v.push_back(x);
           arr[x]++;
        }else
        {
           arr[x]++;
        }

    }

    sort(v.begin(),v.end());
    
    for(int i = 0; i<v.size(); i++)cout<<arr[v[i]]<<" ";



  return 0;
}
