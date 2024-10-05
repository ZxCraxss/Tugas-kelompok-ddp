#include <iostream>
using namespace std;

char papan[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
char pemain = 'X';
int baris, kolom;
bool seri = false;

void papannya() {
cout<<"    |     |     "<<endl;
cout<<"  "<<papan[0][0]<<"  |  " <<papan[0][1]<<"  |  "<<papan[0][2]<<endl;
cout<<"____|_____|_____"<<endl;
}

int main(){
papannya();
return 0;
}
