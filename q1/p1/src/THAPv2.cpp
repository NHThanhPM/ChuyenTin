#include <iostream>
#include <cmath>
struct HanhDong{
    char ViTriHienTai;
    char TrungGian;
    char DichDen;
    char Dia;
    bool ChuaXuLy=true;
    int GioiHanDau;
    int GioiHanCuoi;
    HanhDong(char a,char b,char c,char d,char e,int f,int j){
        ViTriHienTai=a;
        TrungGian=b;
        DichDen=c;
        Dia=d;
        ChuaXuLy=e;
        GioiHanDau=f;
        GioiHanCuoi=j;
    }
    HanhDong(){}
};

std::string *output;


int main(){
    int n;
    std::cin>>n;
    int Soluong=pow(2,n);
    output=new std::string[Soluong];
    HanhDong *CanInRa=new HanhDong[Soluong];
    CanInRa[0]=HanhDong('A','B','C',n,true,0,Soluong);
    for(HanhDong *i=CanInRa;i<CanInRa+Soluong-1;i++){
            int TBCong=(i->GioiHanDau+i->GioiHanCuoi)/2;
            output[TBCong]={i->ViTriHienTai,'-','>',i->DichDen};
            i->ChuaXuLy=false;
            if(i->Dia==1)continue;
            //di chuyển hiện tại đến trung gian
            *(i+1)=HanhDong(i->ViTriHienTai,i->DichDen,i->TrungGian,i->Dia-1,true,i->GioiHanDau,TBCong);
            //di chuyển trung gian đến đích
            *(i+int(Soluong/pow(2,n-i->Dia+1)))=HanhDong(i->TrungGian,i->ViTriHienTai,i->DichDen,i->Dia-1,true,TBCong,i->GioiHanCuoi);
    }

    // for(int i=1;i<n;i++){
    //     for(int j=1;j<Soluong-1;j++){
    //         if(CanInRa[j].Dia==i){
    //             std::cout<<i<<":";
    //             std::cout<< CanInRa[j].ViTriHienTai<<"->"<<CanInRa[j].DichDen<<"\n";
    //         }
    //     }
    // }
    // std::cout<<"A->C";
    //debug in ra tat ca
    // std::cout<<"ketqua:\n";
    delete[] CanInRa;
    for(int i=1;i<Soluong;i++){
        std::cout<<output[i]<<'\n';
    }
    delete[] output;
    // std::cout<<"\nmang:\n";
    // for(int i=0;i<Soluong;i++){
    //     std::cout<<CanInRa[i].ViTriHienTai<<' ';
    //     std::cout<<CanInRa[i].TrungGian<<' ';
    //     std::cout<<CanInRa[i].DichDen<<' ';
    //     std::cout<<CanInRa[i].Dia<<' ';
    //     std::cout<<CanInRa[i].ChuaXuLy<<'\n';
    // }
}