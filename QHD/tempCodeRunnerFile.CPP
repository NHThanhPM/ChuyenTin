
    //in ra log đã xắp xếp ra file
    fstream log("Bank.log",ios::out);
    for(int i=0;i<n;i++){
        log<<kh[i].Sotien<<' '<<kh[i].ThoiGian<<'\n';
    }