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
cout<<"    |     |     "<<endl;
cout<<"  " << papan[2][0]<< " | " << papan [2][1]<< " | " << papan [2][2]<<endl;
cout<<"    |     |     "<<endl;
}

bool Winner(){
for (int i = 0; i < 3; i++){
if papan [i][0] == pemain && papan[i][1] == pemain && papan[i][2] == pemain)
return true;
}
for (int i = 0; i < 3; i++){
  if papan [0][i] == pemain && papan[1][i] == pemain && papan[2][i] == pemain)
return true;
}
if ((papan[0][0] == pemain && papan[1][1] == pemain && papan[2][2] == pemain)||
    (papan[0][2] == pemain && papan[1][1] == pemain && papan[2][0] == pemain)){
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

int main(){
  while (!seri){
    papannya();
    cout << "Pemain " << pemain << ", masukkan nomir posisi (1-9): ";
    int posisi;
    cin>>posisi;

    baris = (posisi - 1) / 3;
    kolom = (posisi - 1) % 3;

    if (papan[baris][kolom] = 'X' && papan[baris][kolom] = 'O') {
            simbol = (pemain == 1) ? 'X' : 'O';
            papan[baris][kolom] = simbol;
            if (cekMenang()) {
                papannya();
                cout << "Pemain " << pemain << " menang\n";
                break;
            }
            berganti giliran();
        } else {
            cout << "kolom sudah terisi  coba lagi.\n";
        }

        seri = 1;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (papan[i][j] = 'X' && papan[i][j] = 'O') {
                    seri = 0;
                }
            }
        }

        if (seri) {
            papannya();
            cout << "Game selesai hasilnya seri\n";
        }
    }

    return 0;
}
