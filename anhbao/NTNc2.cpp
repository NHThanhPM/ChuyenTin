#include <iostream>
#include <ctime>
#include <sstream>
using namespace std;

int D,M,Y,T;

string thang[]{
    "",
    "Jan",
    "Feb",
    "Mar",
    "Apr",
    "May",
    "Jun",
    "Jul",
    "Agu",
    "Sep",
    "Oct",
    "Nov",
    "Dec"  
};

int TimThang(const string&th){
    for(int i=1;i<=12;i++){
        if(th==thang[i])return i;
    }
    return 0;
}

int main(){
    tm time={0};
    cin>>D>>M>>Y>>T;
    time.tm_mday=D;
    time.tm_mon=M-1;// số tháng bắt dầu từ 0
    time.tm_year=Y-1900;// số năm bắt đầu từ năm 1990
    // time.tm_isdst;
    time_t dateline=mktime(&time);
    dateline+=T*24*60*60;
    // cout<<dateline<<'\n';
    // string Ngay(ctime(&dateline));
    stringstream s(ctime(&dateline));
    string day,month,year,temp;
    s>>temp;
    s>>month;
    s>>day;
    s>>temp;
    s>>year;
    cout<<day<<' '<<TimThang(month)<<' '<<year;

}