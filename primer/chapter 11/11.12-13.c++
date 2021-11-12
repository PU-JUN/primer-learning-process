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
	vector<pair<string, int>> human;
	string name;
	int age;
	while (cin >> name >> age) {
		//human.push_back(make_pair(name, age));
		//human.push_back(pair<string, int>(name, age));
		human.push_back({ name, age });
	}
	for (const auto m : human) {
		cout << m.first <<"  "<< m.second << endl;
	}
}