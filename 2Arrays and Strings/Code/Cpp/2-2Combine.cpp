#include<iostream>
#include<vector>

using namespace std;

vector<int> combine(vector<int>& arr1, vector<int>& arr2) {
    // ans is the answer
    vector<int> ans;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] < arr2[j]) {
            ans.push_back(arr1[i]);
            i++;
        } else {
            ans.push_back(arr2[j]);
            j++;
        }
    }
    
    while (i < arr1.size()) {
        ans.push_back(arr1[i]);
        i++;
    }
    
    while (j < arr2.size()) {
        ans.push_back(arr2[j]);
        j++;
    }
    
    return ans;
}

int main()
{
    // test-case #1
    vector<int> s1 = {1,4,7,20};
    vector<int> s2 = {3,5,6};
    vector<int> result = combine(s1, s2);
    cout << "{";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i != result.size() - 1) {
            cout << ",";
        }
    }
    cout << "}" << endl; // {1,3,4,5,6,7,20}

    // test-case #2
	s1 = {4, 8, 20};
	s2 = {1,5,6,17};
	result = combine(s1, s2);
	cout << "{";
	for (int i = 0; i < result.size(); i++) {
		cout << result[i];
		if (i != result.size() - 1) {
			cout << ",";
		}
	}
	cout << "}" << endl; // {1,4,5,6,8,17,20}

    // test-case #3
    s1 = {5,6,8,9};
	s2 = {1,2,4};
	result = combine(s1, s2);
	cout << "{";
	for (int i = 0; i < result.size(); i++) {
		cout << result[i];
		if (i != result.size() - 1) {
			cout << ",";
		}
	}
	cout << "}" << endl; // {1,2,4,5,6,8,9}
	
    return 0;
}

// Time-complexity : O(n+m)
// Space complexity: O(1)
// Note: We usually don't count the output as extra space.
