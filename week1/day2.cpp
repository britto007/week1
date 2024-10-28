
// problem 1
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    int serejaScore = 0, dimaScore = 0;
    int left = 0, right = n - 1;
    bool isSerejaTurn = true;

    while (left <= right) {
        if (cards[left] > cards[right]) {
            if (isSerejaTurn) {
                serejaScore += cards[left];
            } else {
                dimaScore += cards[left];
            }
            left++;
        } else {
            if (isSerejaTurn) {
                serejaScore += cards[right];
            } else {
                dimaScore += cards[right];
            }
            right--;
        }
        isSerejaTurn = !isSerejaTurn;
    }

    cout << serejaScore << " " << dimaScore << endl;
    return 0;
}
//problem 2
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string st;
        cin >> st;

        int left = 0;
        int right = n - 1;


        while (left < n && st[left] == 'W') {
            left++;
        }
        while (right >= 0 && st[right] == 'W') {
            right--;
        }


        if (left > right) {
            cout << 0 << endl;
        } else {

            cout << (right - left + 1) << endl;
        }
    }

    return 0;
}
// peoblem 3
#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<pair<string,string>>leaves;

    for (int i = 0; i < n; ++i) {
        string species, color;
        cin >> species >> color;
        leaves.insert({species, color});
    }

    cout << leaves.size() << std::endl;
    return 0;
}
//problem A(vjudge contest)
#include <iostream>
#include<string>
using namespace std;

int main() {
    int p,q;
    cin>>p>>q;
    if(p>q){
        cout<<0<<endl;
    }
    else if(p==q)cout<<1<<endl;
    else{
        cout<<q-p+1<<endl;
    }

    return 0;
}
//problem B
#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    for (int i = A; i <= B; i++) {
        if (i % C == 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

//problem C
#include <iostream>
#include<string>
using namespace std;

int main() {
    int sum=0;
    int p,q;
    cin>>p>>q;
    int i=2;
    while(i--){
    if(p>q){
       sum+=p;
       p--;

    }

    else{
      sum+=q;
      q--;
    }
}
cout<<sum;
    return 0;
}


