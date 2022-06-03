#include <iostream>

using namespace std;

int main() {
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    int m;
    int a[27] = {0};
    int b[27] = {0};
    char c;

    cin>>n;

    while(n--)
    {
        cin>>c;
        a[c-65]++;
    }
    
    cin>>m;

    while(m--)
    {
        cin>>c;
        b[c-65]++;
    }
    
    int h;
    int s = 0;

    for(int i = 0; i<26; i++)
    {
        cin>>h;
        while(a[i] > 0 && b[i] > 0)
        {
              a[i]--;
              b[i]--;
              s += h;
        }
        
    }
    
    cout<<s;

  return 0;
}
