#include <iostream>
using namespace std;
#include <array>


//pair
// void explainPair(){
//     pair<int, int> p ={1, 3};
//     cout << p.first << " " << p.second ;

//     pair<int , pair<int, int>> p = {2, {1 ,4}};
//     cout << p.first << p.second.first << p.second.second;

//     pair<int, int> arr[] = {{3, 2} ,{7, 6} ,{9,2}};
//     cout << arr[0].second;
//}

//Vector
// void Vector(){
//     vector<int> v;
//     v.push_back(1); //{1}
//     v.emplace_back(2); //{1, 2}

//     vector<pair<int, int>>vec;

//     v.push_back({1, 4});
//     v.emplace_back({1, 4});

//     vector<int> v(5, 100);

//     vector<int> v(5);

//     vector<int> v1({6, 0, 5, 67});
//     vector<int> v2(v1);

//     vector<int>::iterator it = v1.begin();
//     it++;
//     cout << *(it) <<" ";
//     it + 3;
//     cout << *(it) <<"\n";

//     cout << v1.back() << "  this is the end";

//     vector<int>::iterator it = v1.end();
//     vector<int>::iterator it = v1.rend();
//     vector<int>::iterator it = v1.rbegin();

//     for (vector<int>::iterator it = v.begin(); it != v.end(); it++){
//     cout << *(it) << " ";
//     }

//     v.erase(v.begin()+1);

//     vector<int> v(5, 100); // {100, 100, 100, 100, 100}
//     v.insert(v.begin() , 300); // {300, 100, 100, 100, 100, 100}
//     vector<int> A(2, 40);
//     v.insert(v.begin(), A.begin(), A.end()); //{2, 40, 100, 100, 100, 100, 100}

//     //{10, 20} 
//     v.pop_back(); // {10}
    
//     // V1->{110, 20｝
//     // V2 ->{130, 40}
//     v1.swap(v2); // v1 -> {30,40}，V2 ->｛10, 20}

//     cout << v.size() << endl;
//     v.clear(); // erases the entire vector
//     cout << v.size();
// }



// Given an array of integers nums and an integer target. Return the indices(0 - indexed) of two elements in nums such that they add up to target.

// Each input will have exactly one solution, and the same element cannot be used twice. Return the answer in any order.
// Example 1:

// Input: nums = [1, 6, 2, 10, 3], target = 7

// Output: [0, 1]

// Explanation:

// nums[0] + nums[1] = 1 + 6 = 7