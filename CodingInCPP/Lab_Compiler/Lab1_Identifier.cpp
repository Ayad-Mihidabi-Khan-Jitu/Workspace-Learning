//#include <bits/stdc++.h>
//using namespace std;
//
//bool isValidIden(string str, int n)
//{
//
//	// If first character is invalid
//	if (!((str[0] >= 'a' && str[0] <= 'z')
//		|| (str[0] >= 'A' && str[0] <= 'Z')
//		|| str[0] == '_'))
//		return false;
//
//	// Traverse the string for the rest of the characters
//	for (int i = 1; i < str.length(); i++) {
//		if (!((str[i] >= 'a' && str[i] <= 'z')
//			|| (str[i] >= 'A' && str[i] <= 'Z')
//			|| (str[i] >= '0' && str[i] <= '9')
//			|| str[i] == '_')
//			|| str[i] == ' ' 
//			)
//			return false;
//	}
//
//	// String is a valid identifier
//	return true;
//}
//
//int main()
//{
//	
//	//string str = " jitu0";
//	cout << "Input String: "<<endl;
//	string str;
//	cin >> str;
//	int n = str.length();
//
//	char char_array[10000];
//
//	// copying the contents of the
//	// string to char array
//	strcpy(char_array, str.c_str());
//
//	if (isValidIden(char_array, n)) {
//	cout << "Valid Variable Name";
//	}
//	else
//		cout << "Invalid Variable Name";
//
//	return 0;
//}
