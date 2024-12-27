/* 
The C++ Standard Template Library (STL) is a library that contains a wide variety of pre-defined templates, including containers & classes. This makes it easy for developers & programmers to implement different data structures without having to write all the code from scratch or worry about space & time complexities.

The key components of the STL are:

> Containers
> Algorithms
> Iterators
> Functions
*/

#include <bits/stdc++.h>
using namespace std;

void explainPair() {
  pair<int, int> p1 = {1, 3};
  
  cout << p1.first << " " << p1.second << endl;
  
  pair<int, pair<int, int>> p2 = {1, {3, 4}};
  
  cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl;
  
  pair<int,int> arr[] = { {1, 2}, {2, 5}, {5,1} };
  
  cout << arr[1].second;  
}
void explainVector() {
  vector<int> v;
  
  v.push_back(1);
  v.emplace_back(2);

  vector<pair<int, int>> vec;

  v.push_back({1, 2});
  v.emplace_back(1, 2);
  
  vector<int> v1(5, 100); // this container contains 100 of 5 instances(size) like {100, 100, 100, 100, 100}
  
  vector<int> v2(5); // this typically has garbage value or like {0, 0, 0, 0, 0}

  vector<int> v3(5, 20); // this has 5 instances of 20 like {20, 20, 20, 20, 20}
  vector<int> v4(v1); // v4 is another container which has a copy of v1
  
  vector<int>::iterator it = v.begin();
  
  it++;
  cout << *(it) << " " << endl;
  
  it += 2;
  cout << *(it) << " " << endl;
}

int main() 
{
    explainPair();  
    explainVector();
    return 0;
}