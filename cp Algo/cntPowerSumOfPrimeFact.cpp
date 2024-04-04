// C++ program to find prime factorization of a
// number n in O(Log n) time with precomputation
// allowed.
#include "bits/stdc++.h"
using namespace std;

#define MAXN 100001

// stores smallest prime factor for every number
int spf[MAXN];

void sieve()
{
	spf[1] = 1;
	for (int i = 2; i < MAXN; i++)
		spf[i] = i;

	for (int i = 4; i < MAXN; i += 2)
		spf[i] = 2;

	for (int i = 3; i * i < MAXN; i++) {
		if (spf[i] == i) {
			for (int j = i * i; j < MAXN; j += i)
				if (spf[j] == j)
					spf[j] = i;
		}
	}
}



vector<int> getFactorization(int n)
{
	vector<int> ret;
   
	while (n!= 1) {//12!=1,1!=1-false
		ret.push_back(spf[n]);//12-2, 6-2 3-3
		n= n/ spf[n];//12/2=6,6/2=3,3/3=1
	}
	return ret;
}

int main(int argc, char const* argv[])
{

	sieve();
	int n ;
    cin>>n;
	cout << "prime factorization for " << n << " : "<<endl;

    for(int i=1;i<=12;i++){
        cout<<spf[i]<<" ";
    }

cout<<endl;
	vector<int> p = getFactorization(n);

	for (int i = 0; i < p.size(); i++)
		cout << p[i] << " ";
	cout << endl;
  
  map<int,int>mp;
  for(int i=0;i<p.size();i++){
    mp[p[i]]++;

  }
   
   int sum=0;
   for(auto it:mp){
    sum+=it.second;
   }

cout<<sum<<endl;

	return 0;
}
