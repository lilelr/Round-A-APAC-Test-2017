//https://code.google.com/codejam/contest/11274486/dashboard#s=p2
// 二分法近似求值 + 数学知识
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
//int earn[101];
//long double cal(double r,int m){
//    int expotents = m;
//    long double res = (-earn[0])*pow(1+r,expotents);
//    expotents--;
//    for (int i=1; i<=m; i++) {
//        res += earn[i]*pow(1+r, expotents);
//        expotents--;
//    }
//    return res;
//}
//
//int main() {
//    freopen("/Users/yuxiao/XcodeProject/Round A APAC Test 2017/Round A APAC Test 2017/in","r",stdin);
//    freopen("/Users/yuxiao/XcodeProject/Round A APAC Test 2017/Round A APAC Test 2017/out","w",stdout);
//    
//    int T, t;
//    cin >> T;
//    t = 1;
//    int m;
//    //    double ans=0;
//    while (T--) {
//        cin>>m;
//        for(int i=0;i<=m;i++){
//            cin>>earn[i];
//        }
//        long double temp;
//        double mid,l,r;
//        l = -1.0,r=1.0;
//        while (r-l > 1e-12) {
//            mid = (l+r)/2;
//            temp = cal(mid, m);
//            if (temp > 0.0) {
//                l = mid;
//            }else{
//                r  = mid;
//            }
//        }
//        printf("Case #%d: %.12f\n", t++, l);
//    }
//    return 0;
//}
