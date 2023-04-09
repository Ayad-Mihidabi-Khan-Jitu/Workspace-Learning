/////Sol 2
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		string s;
//		cin >> s;
//		string Yes = "Yes";
//		int lenYes = Yes.size(), lenS = s.size(), bou=1;
//		map <char, char> next;
//		for (int i = 0; i < lenYes; i++) {
//			if (i + 1 < lenYes) {
//				next.insert({ Yes[i], Yes[i + 1] });
//			}if (i + 1 == lenYes) next.insert({ Yes[i], Yes[lenYes - (i+1)] });
//		}
//		//next['Y'] = 'e';
//		//next['e'] = 's';
//		//next['s'] = 'Y';
//
//		for (int i = 0; i < lenS; i++) 
//		{
//			if (s[i] != Yes[0] and s[i] != Yes[1] and s[i] != Yes[2]) {
//				bou = 0;
//				break;
//			}
//			if (i + 1 < lenS) {
//				if (s[i + 1] != next[s[i]])
//				{
//					bou = 0;
//					break;
//				}
//			}
//		
//		}
//
//		if (bou) cout << "Yes" << endl;
//		else cout << "No" << endl;
//
//		//for (int i = 0; i < lenYes; i++) {
//		//	cout << Yes[i] << " " << next[Yes[i]] << endl;
//		//}
//
//	}
//}
//
///*
////Sol 1
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--) {
//		string s;
//		cin >> s;
//		string Yes = "Yes";
//		char a = ' ';
//		//com = Yes
//		//Yes,esY,sYe,Ye,es,sY,Y,e,s 
//		//esYes
//		//codeforces
//		//es
//		//se
//		//YesY
//		int bou = -1;
//		if (s.size() == 1 and (s[0] == 'Y' or s[0] == 'e' or s[0] == 's'))
//		{
//			cout << "Yes" << endl;
//			continue;
//		}
//		else if(s.size() == 1 and (s[0] != 'Y' or s[0] != 'e' or s[0] != 's')) 
//		{ 
//			cout << "No" << endl; continue;
//		}
//
//		for (int i = 0; i < s.size()-1; i++) {
//			if (s[i] == Yes[0] or s[i] == Yes[1] or s[i] == Yes[2]) {
//				if (s[i] == Yes[0]) {
//					bou = s[i+1]- Yes[1];
//				}
//				else if (s[i] == Yes[1]) {
//					bou = s[i + 1] - Yes[2];
//				}
//				else {
//					bou = s[i + 1] - Yes[0];
//				}
//				if(bou!=0) {
//					cout << "No" << endl;
//					break;
//				} 
//			}
//			else{
//				cout << "No" << endl;
//				break;
//			}
//		}
//
//		if (bou == 0) {
//			cout << "Yes" << endl;
//		}
//	}
//}
//*/