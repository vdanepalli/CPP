//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        double r1, r2;
        vector<int> res;
        double discrim = (b*b) - (4*a*c);
        if (discrim >= 0){
            r1 = (-b - sqrt(discrim)) / (2.0*a);
            r2 = (-b + sqrt(discrim)) / (2.0*a);
            res.push_back(max(r1,r2));
            res.push_back(min(r1,r2));
        }
        else{
            res.push_back(-1);
            res.push_back(-1);
        }
   
        
        return res;
        
    }
};

//{ Driver Code Starts.

int main() {
    int a, b, c;
    int d;
    d = 19;
    a= 1;
    b=2;
    c=3;
    int T;
    cout << "Enter number of testcases : ";
    cin >> T;
    while (T--) {
        int a, b, c;
        cout << "Enter a b c values : ";
        cin >> a >> b >> c;
        Solution ob;
        vector<int> roots = ob.quadraticRoots(a, b, c);
        if (roots.size() == 1 && roots[0] == -1)
            cout << "Imaginary";
        else
            for (int i = 0; i < roots.size(); i++) cout << roots[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends