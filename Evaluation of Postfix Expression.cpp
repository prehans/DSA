// { Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int> st;;
        int x,y;
    
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='*')
            {
                x=st.top();
                st.pop();
                y=st.top();
                st.pop();
                
                st.push(x*y);
            }
            if(S[i]=='+')
            {
                x=st.top();
                st.pop();
                y=st.top();
                st.pop();
                
                st.push(x+y);
            }
            if(S[i]=='-')
            {
                x=st.top();
                st.pop();
                y=st.top();
                st.pop();
                
                st.push(y-x);
            }
            if(S[i]=='/')
            {
                x=st.top();
                st.pop();
                y=st.top();
                st.pop();
                
                st.push(y/x);
            }
            else if(S[i]>='0'&& S[i]<='9')
            {
               
                st.push(S[i]-'0');
            }
        }
        return st.top();
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
