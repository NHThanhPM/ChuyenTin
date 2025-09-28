#include <bits/stdc++.h>
using namespace std;


int n,q,SoluongSnt=0;
int *k,*CacSnt;

vector<bool> snt;//mảng để sàng số nguyên tố

void Sangsnt(){
    for(int i=2;i<=sqrt(n);i++){
        if(snt[i]){
            // SoluongSnt++;
            for(int j=i*i;j<=n;j+=i){
                snt[j]=false;
            }
        }
    }
}


void TaoMangCacSoNguyeTo(){
    CacSnt=new int[n];
    SoluongSnt=0;
    for(int i=2;i<=n;i++){
        if(snt[i]){
            CacSnt[SoluongSnt++]=i;
        }
    }
}

int main(){
    freopen(".inp","r",stdin);
    freopen(".out","w",stdout);
    cin>>n>>q;
    k=new int[n];
    for(int i=0;i<q;i++){
        cin>>k[i];
    }
    snt=vector<bool>(n+1,true);
    Sangsnt();
    TaoMangCacSoNguyeTo();
    //in ra các số nguyên tố
    cout<<SoluongSnt<<'\n';
    for(int i=0;i<=n;i++)if(snt[i])cout<<i<<' ';
    cout<<'\n';
    for(int i=0;i<SoluongSnt;i++){
        cout<<CacSnt[i]<<' ';
    }
    cout<<'\n';
    //
    cout<<"cacketqua:\n";
    int*SntMax;
    vector<bool> SangUoc;
    for(int i=0.;i<q;i++){
        SntMax=(upper_bound(CacSnt,CacSnt+SoluongSnt,k[i])-1);
        int uoclonhat=n/(*SntMax);
        cout<<"sntlonhat:"<<*SntMax<<" uocs:"<<uoclonhat<<'\n';
        //sàng các ước có nguyên tố lớn hơn
        SangUoc=vector<bool>(uoclonhat+1,true);
        for(int*it=SntMax+1;it<CacSnt+SoluongSnt;it++){
            for(int i=*it;i<=uoclonhat;i+=*it){
                SangUoc[i]=false;
            }
        }
        //hết sàn
        //tìm số lượng số nguyên tố
        int sl=0;
        for(int i=1;i<=uoclonhat;i++){
            if(SangUoc[i])sl++;
        }
        cout<<sl<<'\n';
    }
}