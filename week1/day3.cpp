//problem D
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "0000" + to_string(n);
    int size = s.size();
    vector<char> v;
    for (int i = size - 1; i >= size - 4; i--) {
        v.push_back(s[i]);
    }
    reverse(v.begin(), v.end());
    string str = "";
    for (int i = 0; i < v.size(); i++) {
        str += v[i];
    }
    cout << str;

    return 0;
}
//problem E
#include <iostream>
using namespace std;

int main() {
    int a, b, t;
    cin >> a >> b >> t;

    int total_biscuits = 0;
    for (int i = 1; i * a <= t + 0.5; ++i) {
        total_biscuits += b;
    }

    cout << total_biscuits;
    return 0;
}
//problem F
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  string str;
  cin>>str;
  vector<char>v(26,'X');
  for(int i=0;i<str.size();i++){
      int p=str[i]-97;
      v[p]=str[i];
  }
  for(int i=0;i<26;i++){
      if(v[i]=='X'){
          cout<<(char)(i+97);
         return 0;
      }
  }
  cout<<"None";
    return 0;
}
//problem G
#include <iostream>
using namespace std;
int main() {
    int S, T;
    cin >> S >> T;
    int count = 0;

    for (int a = 0; a <= S; ++a) {
        for (int b = 0; b <= S - a; ++b) {
            for (int c = 0; c <= S - a - b; ++c) {
                if (a * b * c <= T) {
                    count++;
                }
            }
        }
    }

    cout << count <<endl;
    return 0;
}
//problem H
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    long long int totalSum = 0;
    for (long long int num : nums) {
        totalSum += num;
    }

    if (totalSum % 2 == 0) {
        cout << totalSum << endl;
        return 0;
    }

    long long int minOdd = LONG_MAX;
    for (long long int num : nums) {
        if (num % 2 != 0) {
            minOdd = min(minOdd, num);
        }
    }

    if (minOdd == LONG_MAX) {
        cout << 0 << endl;
    } else {
        cout << totalSum - minOdd << endl;
    }

    return 0;
}

