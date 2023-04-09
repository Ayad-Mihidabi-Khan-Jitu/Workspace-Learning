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
//char* readFromFile() {
//	fstream my_file;
//	char ch[10000];
//	my_file.open("lab1input_identifier.txt", ios::in);
//	if (!my_file) {
//		cout << "No such file" << endl;
//	}
//	else {
//		int i = 0;
//		while (1) {
//			my_file >> ch[i++];
//			if (my_file.eof())
//				break;
//
//			//cout << ch;
//		}
//		for (int j = 0; j < i - 1; j++) {
//			cout << ch[j];
//		}
//
//	}
//	my_file.close();
//	return ch;
//}
//
//int main()
//{
//	string str = readFromFile();
//	int n = str.length();
//	cout << str << n << endl;
//
//	if (isValidIden(str, n)) {
//		cout << "Valid";
//	}
//	else
//		cout << "Invalid";
//
//	return 0;
//}
