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
int main()
{
    multimap<string, list<int>> dictionary = { {"word",list<int>{1,4,5}},{"ad",list<int>{1,7,8}},{"sda",list<int>{1,2,3}} };

	for (const auto &h : dictionary) {
		cout << "the word" << h.first << "occur in:" << endl;
		for (const auto &n : h.second) {
			cout<< n << " " << endl;
		}
	}
    return 0;
}

