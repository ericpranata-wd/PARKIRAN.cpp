#include "header.h"

int main() 
{
	stack spulang[100], sdatang[100];
	int head;
	int* ptr;
	int head2;
	head2=0;
	
	ptr=&head;
    string type, plat;
    node baru = NULL;
    int pilihan;
    
    
    
    do {
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n"
             << "-=       M E N U  P I L I H A N      =-      ____________________________ \n"
             << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-     |____________/               \\\n"
             << "| [0] Keluar                          |     |    |   Kami Datang Untuk   |\n"
             << "| [1] Pelanggan mau parkir            |     |    |                       \\\n"
             << "| [2] Cek yang parkir                 |     |    |      B E L A J A R     |\n"
             << "| [3] Orang mau pulang                |     |    |                        |\n"
             << "| [4] Cek data datang                 |     |    |  Kami Pulang Membawa   |\n"
             << "| [5] Cek data pulang                 |     |    |                        |\n"
             << "|                                     |     |    |        I L M U  ______|\n"
             << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-     |_______________/________|\n"
             << "-= Masukkan Pilihan : "; cin >> pilihan;
        
        switch (pilihan) {
            case 1:
                cout<<"Kendaraan : "; cin >> type;
                cout<<"Plat      : "; cin >> plat;
                if (head2==100){
                	head2=0;
				}
				sdatang[head2].motor=type;
				sdatang[head2].plat=plat;				
                parkir(baru, type, plat);
                head2++;
                break;
                
            case 2:
                cek(baru);
                break;
                
            case 3:
                cout<<"Plat : "; cin >> plat;
                pulang(baru, plat, spulang,*ptr);
                break;
            case 4:
            	if (sdatang[0].plat != ""){
	            	cout<<"data datang sebagai berikut : "<<endl;
    	        	tampil(sdatang, head2);
				}
            	else{
            		cout<<"data masih kosong"<<endl;
				}
            	break;
            case 5:
            	cout<<spulang[100].plat<<endl;
            	if (spulang[0].plat != ""){
            	cout<<"data pulang sebagai berikut : "<<endl;
            	tampil(spulang,*ptr);
            	}
            	else{
            		cout<<"data masih kosong"<<endl;
				}
				break;
            case 0:
            	break;
            default:
                cout << "Pilihan Anda Tidak Tersedia! " << endl;
                break;
        }
        cout<<endl<<endl;
    } while (pilihan != 0);
    
    return 0;
}

