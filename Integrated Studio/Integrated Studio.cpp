// Integrated Studio.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

int getHighestNumber(vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int max = nums[0];
    for (const int& i : nums) {
        if (i > max) {
            max = i;
        }
    }
    return max;
}

pair<int, int> getHighestandOccurences(vector<int> nums) {
    int streak = 0;
    sort(nums.begin(), nums.end(), greater<int>());

    for (const int& i : nums) {
        if (i != nums[0]) {
            break;
        }
        streak += 1;
    }

    return make_pair(nums[0], streak);
}

struct Man {
    string firstName;
    string lastName;
    string gender;
    string emails;
    string code;
    string year;
    string jobTitle;
};

int main()
{
    vector<int> nums = { 55, 66, 5, 43, 67, 99, 23, 12, 99, 99 };
    vector<int> nums2 = {-3,-6,-22,-9,-7};
    vector<int> nums3 = {};
    pair<int, int> pair{};
    //cout << getHighestNumber(nums3) << endl;
    
    pair = getHighestandOccurences(nums);
    cout << "Highest number: " << pair.first << ", How many time it occurs: " << pair.second << endl;

    ifstream myFile;
    myFile.open("users.txt");

    if (!(myFile.is_open())) {
        cout << "ERROR, File is not opened!" << endl;
    }
    
    vector<Man> persons{};
    string line;
    while (getline(myFile, line)) {
        
    }

    cout << persons[0].firstName;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
