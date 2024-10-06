#include <iostream>
using namespace std;

char papan[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
char pemain = 'X';
int baris, kolom;
bool seri = false;

void papannya() {
    cout << "     |     |     " << endl;
    cout << "  " << papan[0][0] << "  |  " << papan[0][1] << "  |  " << papan[0][2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << papan[1][0] << "  |  " << papan[1][1] << "  |  " << papan[1][2] << "  " << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << papan[2][0] << "  |  " << papan[2][1] << "  |  " << papan[2][2] << "  " << endl;
    cout << "     |     |     " << endl;
}

bool Winner(){
for (int i = 0; i < 3; i++){
if (papan[i][0] == papan[i][1] && papan[i][1] == papan[i][2])
return true;
}
for (int i = 0; i < 3; i++){
  if (papan[0][i] == papan[1][i] && papan[1][i] == papan[2][i])
return true;
}
if ((papan[0][0] == papan[1][1] && papan[1][1] == papan[2][2])||
    (papan[0][2] == papan[1][1] && papan[1][1] == papan[2][0])){
return true;
  }
return false;
}

bool BoardFull(){
  for(int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      if (papan[1][j] != 'X' && papan [i][j] !='O')
        return false;
return true;
}

void giliran(){
int pilihan;
if (pemain == 'X') {
  cout<<"Giliran Pemain X: ";
} else {
  cout<<"Giliran Pemain O: ";
}
cin>>pilihan;
switch(pilihan){
case 1: baris = 0; kolom = 0; break;
case 2: baris = 0; kolom = 1; break;
case 3: baris = 0; kolom = 2; break;
case 4: baris = 1; kolom = 0; break;
case 5: baris = 1; kolom = 1; break;
case 6: baris = 1; kolom = 2; break;
case 7: baris = 2; kolom = 0; break;
case 8: baris = 2; kolom = 1; break;
case 9: baris = 2; kolom = 2; break;
  default: cout<<"pilihan tidak ada"<<endl;
    return;
}
if(papan[baris][kolom] != 'X' && papan[baris][kolom] != 'O'){
papan[baris][kolom] = pemain;
if (pemain == 'X') {
   pemain = 'O';
} else {
  pemain = 'X';
}
} else {
cout<<"tempat itu sudah dipilih, silakan pilih yg lain"<<endl;
giliran();
}
}

int main(){
  cout<<"Selamat datang di game tic tac toe"<<endl;
  cout<<"by (riki, achira, fahmi)"<<endl;
  while (!Winner() && !BoardFull()){
    papannya();
    giliran();
  }
  papannya();
  if(Winner()) {
    if (pemain == 'X'){
      cout<<"Pemain O Menang"<<endl;
    } else {
      cout<<"Pemain X menang"<<endl;
    }
  } else if(BoardFull()){
    cout<<"Seri"<<endl;
  }
    
    return 0;
}
