//字符串比较 https://code.google.com/codejam/contest/11274486/dashboard#s=p0
//#include <algorithm>
//#include <cmath>
//#include <cstdio>
//#include <iostream>
//#include <map>
//#include <queue>
//#include <set>
//#include <string>
//#include <vector>
//using namespace std;
//#define LL long long
//
//string cities[105];
//
//int compare(string& a,string& b){
//    int lettersa[26],lettersb[26];
//    int counta=0,countb=0;
//    memset(lettersa, 0, sizeof(lettersa));
//    memset(lettersb, 0, sizeof(lettersb));
//    for (int i=0; i<a.length(); i++) {
//        if (a[i]!=' ') {
//            if ( lettersa[a[i]-'A'] ==0) {
//                counta++;
//                lettersa[a[i]-'A'] = 1;
//            }
//        }
//    }
//    
//    for (int i=0; i<b.length(); i++) {
//        if (b[i] != ' ') {
//            if ( lettersb[b[i]-'A'] ==0) {
//                countb++;
//                lettersb[b[i]-'A'] = 1;
//            }
//        }
//    }
//    
//    if (counta > countb) {
//        return 1;
//    } else if(counta<countb){
//        return -1;
//    }else{
//        return b.compare(a);
//        
//    }
//    return 0;
//}
//
//int main() {
//    freopen("/Users/yuxiao/XcodeProject/Round A APAC Test 2017/Round A APAC Test 2017/in","r",stdin);
//    freopen("/Users/yuxiao/XcodeProject/Round A APAC Test 2017/Round A APAC Test 2017/out","w",stdout);
//    int T, t;
//    cin >> T;
//    t = 1;
//    int n;
//    string ans;
//    char c;
//    while (T--) {
//        cin>>n;
//        c=getchar();
//        getline(cin,cities[0]);
//        //        cout<<cities[0]<<endl;
//        ans = cities[0];
//        if (n!=1) {
//            for (int i=1; i<n; i++ ) {
//                getline(cin,cities[i]);
//                //                cout<<cities[i]<<endl;
//                int compareAns =compare(ans,cities[i]);
//                if (compareAns <0) {
//                    ans = cities[i];
//                }
//            }
//        }
//        
//        cout<<"Case #"<<t++<<": "<<ans<<endl;
//    }
//    return 0;
//}
