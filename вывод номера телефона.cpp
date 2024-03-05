#include <iostream>
#include <string>
using namespace std;

struct Phone {
    string cod_country;
    string cod_city;
    string number;
};
void out_Phone (Phone a){
    cout << "+"<< a.cod_country<< "(" << a.cod_city << ")" <<a.number;
}
void in_Phone (Phone &a){
    cout << "vvedite cod country: "; cin >> a.cod_country;
    cout << "vvedite cod city: "; cin >> a.cod_city;
    cout << "vvedite number: "; cin >> a.number;
}

int main() {
    Phone A,B ={ "8", "8", "9"};
    //cin >> A.cod_country>>A.cod_city>>A.number;
    //cout <<A.cod_country<< A.cod_city<<A.number;
    in_Phone(B );
    out_Phone (B );

    return 0;
}
