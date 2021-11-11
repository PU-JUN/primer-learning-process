#include <iostream>
#include<string>
#include<vector>
#include<list>
#include<cctype>
#include<iterator>
#include<cstddef>
#include<algorithm>
#include<numeric>
#include"head.h"
#include<map>
#include<set>
using namespace std;
/*
bool isShorter(const string &s1, const string &s2) {
	return s1.size() < s2.size();
}
bool isLong(const string &s1) {
	return s1.size() < 5;
}
void biggies( vector<string> words, int num) {
	sort(words.begin(), words.end());
	auto end_unique = unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
	stable_sort(words.begin(), words.end(), [](const string s1, const string s2) {return s1.size() < s2.size(); });
	auto wc = find_if(words.begin(), words.end(), [num](const string a) {return a.size() >= num; });
	for_each(wc, words.end(), [](const string a) {cout << a << " "; });
}
*/

int main()
{
	/*   例10.1
	int a[] = { 1,2,2,2,3,5,6,7 }, b = 2;
	cout << count(begin(a), end(a), b) << endl;
	*/
	/*   练习10.2
	list <string> input;
	string temp,result = "ok";
	while (cin >> temp) {
		input.push_back(temp);
	}
	cout << count(input.begin(), input.end(), result) << endl;
	*/
	/*   练习 10.3
	vector <double> input = { 1,2,3,4,5,6,7,8 };
	cout << accumulate(input.begin(), input.end(), 0) << endl;
	*/
	/*    练习10.6
	vector <int> input = { 1,2,3,4,5,6,7,8 };
	for (auto a = input.begin(); a != input.end(); a++) {
		cout << *a << endl;
	}
	fill_n(input.begin(), input.size(), 1);
	for (auto a = input.begin(); a!= input.end(); a++) {
		cout << *a << endl;
	}
	*/
	/*   例 10.10-10.11
	vector <string> words{ "we","are" ,"famaily" , "he" , "is" , "a" , "dog" , "she" , "is" , "a" , "bird" , "we" , "is" ,"fox","red" };
	sort(words.begin(), words.end());
	for (auto a = words.begin(); a != words.end(); a++) {
		cout << *a << " ";
	}
	cout << endl;

	sort(words.begin(), words.end(), isShorter);
	for (auto a = words.begin(); a != words.end(); a++) {
		cout << *a << " ";
	}
	cout << endl;

	stable_sort(words.begin(), words.end(), isShorter);
	for (auto a = words.begin(); a != words.end(); a++) {
		cout << *a << " ";
	}
	cout << endl;

	auto end_unique = unique(words.begin(), words.end());
	for (auto a = words.begin(); a != words.end(); a++) {
		cout << *a << " ";
	}
	cout << endl;
	words.erase(end_unique, words.end());
	for (auto a = words.begin(); a != words.end(); a++) {
		cout << *a << " ";
	}
	*/
	/*
	vector <string> words{ "we","are" ,"famaily" , "he" , "is" , "a" , "dogfdg" , "she" , "is" , "a" , "birdss" , "wesadasd" , "isadas" ,"fox","red" };
	auto b = partition(words.begin(), words.end(), isLong);
	cout << *b << " ";
	cout << endl;
	for (auto a = words.begin(); a != words.end(); a++) {
		cout << *a << " ";
	}
	cout << endl;
	for (auto a = b; a != words.end(); a++) {
		cout << *a << " ";
	}
	cout << endl;
	*/
	/*
	vector <string> words{ "we","are" ,"famaily" , "heasdasd" , "is" , "asdasda" , "dog" , "shce" , "is" , "a" , "bird" , "we" , "is" ,"fox","red" };
	int a = 4;
	biggies(words, a);
	*/
	/*   习题10.20
	vector <string> words{ "we","are" ,"famaily" , "heasdasd" , "is" , "asdasda" , "dog" , "shce" , "is" , "a" , "bird" , "we" , "is" ,"fox","red" };
	int sum;
	sum = count_if(words.begin(), words.end(), [](const string s) {  if (s.size() > 5)  return 1; else return 0; });
	cout << sum;
	*/
	/*  11.3
	map<string, size_t> word_count;
	string word;
	while (cin >> word) {
		++word_count[word];
	}
	for (auto &w : word_count) {
		cout << w.first << "occur" << w.second << endl;
	}
	*/
	/*
	map<string, vector<string>> family;
	string surname,name;
	while (cin >> surname >> name) {
		family[surname].push_back(name);
	}
	for (const auto &h : family) {
		for (const auto &n : h.second) {
			cout << h.first << " " << n << endl;
		}
	}
	*/
	multimap<string, list<int>> dictionary = { {"word",list<int>{1,4,5}},{"ad",list<int>{1,7,8}},{"sda",list<int>{1,2,3}} };

	for (const auto &h : dictionary) {
		cout << "the word" << h.first << "occur in:" << endl;
		for (const auto &n : h.second) {
			cout<< n << " " << endl;
		}
	}
}