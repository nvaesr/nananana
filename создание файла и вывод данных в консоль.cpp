#include <iostream>
#include <fstream>
int main ()
{
	std::string s;
    std ::ofstream out;
    out.open ("porosenok.txt");
    if (out.is_open())
    {
        out << "gotovo" << std ::endl;
    }
    out.close();
    std::cout <<"file has been written" << std::endl;
    std::ifstream Kotik;
    Kotik.open ("porosenok.txt");
    if (Kotik.is_open()) {
	 getline (Kotik,s);
	 std::cout << s;
}
 
}
