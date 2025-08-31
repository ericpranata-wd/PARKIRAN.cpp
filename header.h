#include <iostream>
#include <malloc.h>
#include <string>
#include <conio.h>
#include <stdlib.h>

using namespace std;

typedef struct tnode *node;

struct tnode
{
    string motor;
    string plat;
    tnode *next;
    tnode *prev;
};

struct stack{
	string motor;
	string plat;
};

void parkir(node &n, string type, string plats);
void cek(node &n);
void pulang(node&n, string platmotor, stack pulang[100],int &head);
void tampil(stack aray[100],int &head);



