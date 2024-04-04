#include<bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

string smallestWord(int n) {
    string ans = "";
    int cnt = 2;

    while (n) {
        if (n >= 26 + cnt) {
            ans += 'z';
            n -= 26;
        } else {
            ans += 'a' + (n - cnt) - 1;
            n -= (n - cnt);
        }
        cnt--;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
   int t;
   cin >> t;
   while(t--){
     int n;
    cin >> n;
    cout << smallestWord(n) << endl;
   }
    return 0;
}
