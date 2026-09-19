#include <iostream>
using namespace std;



//pair
// void explainPair(){
//     pair<int, int> p ={1, 3};
//     cout << p.first << " " << p.second ;

//     pair<int , pair<int, int>> p = {2, {1 ,4}};
//     cout << p.first << p.second.first << p.second.second;

//     pair<int, int> arr[] = {{3, 2} ,{7, 6} ,{9,2}};
//     cout << arr[0].second;
//}

void Vector(){
    // vector<int> v;
    // v.push_back(1); //{1}
    // v.emplace_back(2); //{1, 2}

    // vector<pair<int, int>>vec;

    // v.push_back({1, 4});
    // v.emplace_back({1, 4});

    // vector<int> v(5, 100);

    // vector<int> v(5);

    vector<int> v1({6, 0, 5, 67});
    vector<int> v2(v1);

    vector<int>::iterator it = v1.begin();
    it++;
    cout << *(it) <<" ";
    it + 3;
    cout << *(it) <<"\n";

    cout << v1.back() << "  this is the end";

    // vector<int>::iterator it = v1.end();
    // vector<int>::iterator it = v1.rend();
    // vector<int>::iterator it = v1.rbegin();
}

int main(){
    Vector();
}