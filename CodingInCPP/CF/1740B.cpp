//#include<bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int t;
//    cin >> t;
//    while (t--) {
//        int n;
//        cin >> n;
//        vector< pair <int, int> > vect;
//        for (int i = 0; i < n; i++) {
//            int a, b;
//            cin >> a >> b;
//            if(a<b) swap(a,b);
//            vect.push_back(make_pair(a, b));
//        }
//
//        sort(vect.begin(), vect.end());
//        long long bou = 0;
//
//        for (int i = 0; i < n; i++)
//        {
//            bou += vect[i].second * 2;
//            //cout << vect[i].first << " " << vect[i].second << endl;
//        }
//        
//        for (int i = 0; i < n - 1; i++)
//        {
//            bou += vect[i+1].first - vect[i].first;
//            //cout << vect[i].first << " " << vect[i].second << endl;
//            //cout << bou << endl;
//        }
//        bou += vect[0].first + vect[n - 1].first;
//        cout << bou << endl;
//    }
//
//
//}