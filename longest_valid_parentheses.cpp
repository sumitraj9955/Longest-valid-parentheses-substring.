#include<bits/stdc++.h>
using namespace std;
int longestValidParantheses(string s){
    stack<int>st;
    st.push(-1);

    int maxLength = 0;

    for(int i=0 ; i<s.size() ; i++){
        if(s[i] == '(') st.push(i);
        else{
            st.pop();
            if(st.empty()) st.push(i);
            else maxLength = max(maxLength , i-st.top());
        }
    }
    return maxLength;
}

int main(){
    string s;
    cin>>s;

    cout<<longestValidParantheses(s);
    return 0;
}