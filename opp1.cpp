#include <bits/stdc++.h>
using namespace std ;
class sinhvien{
    private:
        string id , ten , ns ;
        double gpa ;
    public :
        sinhvien();
        sinhvien(string,string,string ,double );
        void nhap();
        void in ();
 //       void xinchao();
   //     void dihoc(); 

};
sinhvien::sinhvien(){
    cout << " ham khoi tao duoc goi ! \n ";
}
sinhvien::sinhvien(string ma ,string name , string birth , double diem ){
    cout << "ham khoi tao co than so duoc goi !\n";
    id = ma ;
    ten = name ;
    ns = birth ;
    gpa = diem ;
}
//sinhvien::~sinhvien(){
 //   cout<< " doi tuong duoc huy tai day !\n";
//}
void sinhvien::nhap(){
    cout << "nhap id :" ; cin >> id;
   // cin.ignore();
    cout << "nhap ten :"; cin >> ten ;
    cout << "nhap ns :"; cin >> ns;
    cout << "nhap diem :"; cin >> gpa ;

    
}
void sinhvien::in(){
    cout <<id << " "<< ten <<" " << ns << " "<< fixed << setprecision(2) << gpa << endl ;

}
//void sinhvien::xinchao(){
//    cout<<"hello !\n";
//}
//void sinhvien::dihoc(){
//    cout << "di hoc! \n";
//}
int main (){
    int n; cin >> n;
    sinhvien a[100];
    for ( int i = 0 ; i < n ; i++){
        a[i].nhap();

    }
    for (int i = 0 ; i < n ; i ++){
        a[i].in();
    }
    
    
    return 0;
}