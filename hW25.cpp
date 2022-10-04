#include <iostream>
#include <string>
using namespace std;

string find_sym(string S, char sym) {
	string new_str{};
	for (int i = 0; i < 12; i++) {
		if (S[i] == sym)
			new_str += sym;
	}
	return new_str;
}
bool palindrome(string word) {
	for (int i = 0; i < word.length(); i++)
		word[i] = tolower(word[i]);
	string new_word = word;
	for(int i=0,j= word.length() - 1; j>=0; i++,j--)
		new_word[i] = word[j];
	if(new_word==word)
			return true;
	else
		return false;
}

int count_sym(string str) {
	int counter = 0;
	for (int i = 0; i < str.length(); i++)
		if (str[i] == ' ' or str[i] == ',' or str[i]=='!' or str[i]=='?' or str[i]=='.')
			counter++;
	return counter;
}

string func(string str, char sym) {
	int index = 0;	
	for (int i = str.length() - 1; i >= 0; i--)
		if (str[i] == sym){
			index = i;
			break;
		}
	string new_str;
	if(index>0)
		for (int i = index; i < str.length(); i++)
			new_str += str[i];
	return new_str;
}
int main() {
	setlocale(LC_ALL, "Russian");



	cout << "�������� ������� �25.\n\n������ �1.\n";
	string str = "Hello world!";
	cout << str << endl;
	cout << "������� ������: ";
	char sym;
	cin >> sym;
	string new_str = find_sym(str, sym);
	cout << "����� ������: "<< new_str << "\n\n";

	cout << "������ �2.\n������� �����: ";
	string word;
	cin >> word;
	cout <<"���������: " << palindrome(word) << "\n\n";

	cin.ignore();
	cout << "������ �3.\n������� ������: ";
	string stroka;
	getline(cin, stroka);
	cout << "���������� �������� � ������ ���������� = " << count_sym(stroka) << ".\n\n";

	cout << "������ �4.\n";
	string strochka = "Hello world!";
	cout << strochka << endl;
	cout << "������� ������: ";
	char symbol;
	cin >> symbol;
	cout << func(strochka, symbol) << "\n\n";


	return 0;
}