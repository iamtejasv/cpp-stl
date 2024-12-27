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

int main() 
{
    explainPair();  
    return 0;
}