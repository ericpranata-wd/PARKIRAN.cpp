#include "header.h"

int isEmpty(node &n)
{
    if (n == NULL)
    {
        return 1;
    } 
    else
    {
        return 0;
    }
}

void parkir(node &n, string type, string plats)
{
    node baru, bantu;
    baru = new tnode;
    baru->motor = type;
    baru->plat = plats;
    baru->next = NULL;
    baru->prev = NULL;
    if (n == NULL)
    {
        n = baru;
    }
    else
    {
//        baru->next = n;
//        n->prev = baru;
		bantu = n;
		while (bantu->next != NULL) 
		{	
			bantu = bantu->next;
		}
     	baru->prev = bantu;
      	bantu->next = baru;
//        n=baru;
    }    
}

void cek(node &n)
{
    node bantu;
    bantu = n;
    if (n != NULL)
    {
        while (bantu != NULL)
        {
            cout<<"Tipe Motor : " << bantu->motor<<endl;
            cout<<"Plat       : " << bantu->plat<<endl;
            bantu = bantu->next;
        }
        // cout<<bantu->motor;
    }
    else
    {
        cout<<"Parkiran kosong bang !_!";
    }
}

void tampil(stack aray[100],int &head){
	for(int i=head;i<=99;i++){
		if(aray[i].plat != ""){
            cout<<"Tipe Motor : " << aray[i].motor<<endl;
            cout<<"Plat       : " << aray[i].plat<<endl;
		}
	}
	for(int i=0;i<=head-1;i++){
		if(aray[i].plat != ""){
            cout<<"Tipe Motor : " << aray[i].motor<<endl;
            cout<<"Plat       : " << aray[i].plat<<endl;
		}
	}
}

void pulang(node &n, string platmotor, stack spulang[100], int &head)
{
    node bantu;
    bool hapus=0;
    bantu = n;
    string type,plats;
    if (n!=NULL)
    {
        while (bantu->plat != platmotor and bantu->next != NULL)
        {
            bantu = bantu -> next;
        }
        if (bantu->plat == platmotor){
        	
//        	masukan data ke stack
			if(head==100){
				head=0;
			}
        	spulang[head].motor=bantu->motor;
        	spulang[head].plat=bantu->plat;
			head++;
			
		if (bantu->next!=NULL){	
			if(bantu->prev!=NULL){
			bantu=bantu->next;
			bantu->prev=bantu->prev->prev;
			bantu=bantu->prev;
			bantu->next=bantu->next->next;
			}
			else{
				bantu=bantu->next;
				bantu->prev=NULL;
			}
		}
		else{
			if (bantu->prev!=NULL){
				bantu=bantu->prev;
				bantu->next=NULL;
			}
			else{
				hapus=1;
			}
		}
			while(bantu->prev!=NULL){
				bantu=bantu->prev;
			}
			if (hapus){
				bantu=NULL;
			}
			n=bantu;
			cout<<"Motor pelanggan telah dikeluarkan"<<endl;
		}
    }
    else
    {
        cout<<"Parkiran masih kosong";
    }
    
}
