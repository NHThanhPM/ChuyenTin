/*
========== ||       ||      //\\     ||\\    || ||      ||
   ||      ||       ||     //  \\    || \\   || ||      ||
   ||      ||=======||    //====\\   ||  \\  || ||======||
   ||      ||       ||   //      \\  ||   \\ || ||      ||
   ||      ||       ||  //        \\ ||    \\|| ||      ||
*/
#include <bits/stdc++.h>
using namespace std;

/**
 * \brief khởi tạo đổi luồng vào ra bằng file
 */
void init(){
    std::ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    #define TASK "C"
    if(fopen(TASK".INP","r")){
        freopen(TASK".INP","r",stdin);
        freopen(TASK".OUT","w",stdout);
    }
}

char dao(char a){
    if(a==')')return '(';
    if(a==']')return '[';
    if(a=='}')return '{';
    return '0';
}

bool check(char a)//check tham số là mở ngoặc
{
    for(char x:{'(','[','{'})
    if(x==a)return true;
    return false;
}

bool MainCheck(const string&s){
    stack<char> st;
    st.push('0');
    for(int i=0;i<s.size();i++){
        if(check(s[i]))st.push(s[i]);
        else if(dao(s[i])==st.top()){
            st.pop();
        }
        else return 0;
    }
    return st.size()==1;
}

int main(){
    init();
    string s;
    while(cin>>s){
        cout<<(MainCheck(s)?'Y':'N')<<'\n';
    }
}