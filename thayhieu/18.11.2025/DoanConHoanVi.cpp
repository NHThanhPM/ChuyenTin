/*                        \\
                           \\
__________ __      __      __      ___     __ __      __
    ||     ||      ||     //\\     ||\\    || ||      ||
    ||     ||      ||    //  \\    || \\   || ||      ||
    ||     ||======||   //====\\   ||  \\  || ||======||
    ||     ||      ||  //      \\  ||   \\ || ||      ||
    ||     ||      || //        \\ ||    \\|| ||      ||
*/
#include <bits/stdc++.h>
using namespace std;
void init(){
    #define TASK "Bai1"
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    if(!fopen(TASK".INP","r")){
        return;
    }
    freopen(TASK".INP","r",stdin);
    freopen(TASK".OUT","w",stdout);
}
#define ULL unsigned int
class solution{
private:
    int n,m,unique/*số lượng số khác nhau*/;
    vector<int>a;
    vector<ULL> appear;//số lần xuất hiện
    inline void add(int item){
        if(!appear[item])unique++;
        appear[item]++;
    }
    inline void erase(int item){
        appear[item]--;
        if(!appear[item])unique--;
    }
    inline int AddMItem(int index){
        int i=index;
        index+=m-1;
        while(i<index && i<n){
            if(a[i]>m){
                i++;
                index=i+m-1;
                appear.resize(m+1,0);
                unique=0;
                continue;
            }else{
                add(a[i]);
                i++;
            }
        }
        return i;
    }
public:
    friend istream& operator>>(istream&in,solution&input)
    {
        in>>input.n>>input.m;
        input.a.resize(input.n);
        for(int i=0;i<input.n;i++){
            cin>>input.a[i];
        }
        input.appear.resize(input.m+1);
        return in;
    }
    unsigned long long answer(){
        unsigned long long res=0;
        unique=0;
        int i=AddMItem(0);
        while(i<n){
            if(a[i]>m){
                i=AddMItem(i+1);
            }else{
                add(a[i]);
                res+=unique==m;
                i++;
                erase(a[i-m]);
            }
        }
        return res;
    }
};
solution obj;
int main(){
    init();
    cin>>obj;
    cout<<obj.answer();
}