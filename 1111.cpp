#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "vvedite razmer massiva: ";
    cin >> n;
 int array [n];
 
 srand (time(0));
 
 for(int i = 0; i < n; i++)
 {
    array [i] = rand()%1000;
 }
 for (int i = 0; i < n; i++)
 {
     cout << array [i];
 
 cout << endl;
 }
  
 for (int i=0; i < n; i++)
 for (int j=0; j < n-1; j++)
 if (array[i] > array[i+1]){
     int temp = array [i+1];
     array[i+1] =array[i];
     array[i]=temp;
 }
 
 cout << "sort array: \n";
 for(int i = 0; i < n; i++)
 {
     cout << array[i];
 }
 
 return 0;
}