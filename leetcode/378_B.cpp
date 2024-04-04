#include <iostream>
#include <unordered_map>
using namespace std;

int lengthOfRepeatingSubstring(string s) {
    int n = s.length();
    int result = -1;

    for (int len = 1; len <=n; len++) {
        unordered_map<string, int> mp;

        for (int i = 0; i <= n - len; i++) {
            string substr = s.substr(i, len);
            mp[substr]++;
            
            if (mp[substr] >2) {
                result =max(result, len);   
            }
        }
    }
    //ccc e rrr e c d c d cc e d e c d ccc dd eee dd cdc dd ed cc dc eee d cc ecde
     
    return result==0?-1:result;
}

int main() {
    string s ;
    cin>>s;
    int result = lengthOfRepeatingSubstring(s);
    cout<<result<<endl;

    return 0;
}
