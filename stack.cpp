#include <iostream>
using namespace std;

struct element{
	int data;
	element *next;
};
struct element *top=NULL;
bool isEmpty(){
	return top==NULL;
}
void listdata(){
	element *baru,*bantu;
	baru = new element;
	cout<<"Masukkan data :";
	cin>>baru->data;
	baru->next =NULL;
	if(isEmpty()){
		top=baru;
		top->next=NULL;
	}
	else{
		bantu=top;
		while(bantu->next!=NULL){
			bantu=bantu->next;
		}
		bantu->next=baru;
	}	
}
