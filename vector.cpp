#include <iostream>
#include <vector>
using namespace std;

void test_vector_pop_back()
{
	std::vector<int> vec;
	vec.push_back(0);
	vec.pop_back();
	vec.pop_back();
	cout<<"succeed"<<endl;
}

int main()
{
	int t;
	cin>>t;
	test_vector_pop_back();
	getchar();
	return 0;
}