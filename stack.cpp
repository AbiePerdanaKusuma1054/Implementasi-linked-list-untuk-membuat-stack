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
void push(){
	element *baru;
	baru=new element;
	cout<<"Masukkan Data :";
	cin>>baru->data;
	baru->next=NULL;
	if(isEmpty()){
		top=baru;
		top->next=NULL;
	}
	else{
		baru->next=top;
		top=baru;
	}
}
void pop(){
	int q;
	element *baru;
	if(top==NULL){
		cout<<"Stack masih kosong"<<endl;
	}
	else{
		baru=top;
		top=top->next;
		delete baru;
	}
}
void topdata(){
	if(isEmpty()){
		cout<<"Stack masih kosong"<<endl;
	}
	else{
		cout<<"Data Top : "<<top->data<<endl;
	}
}
void printstack (){
	element *bantu;
	if(isEmpty()){
		cout<<"Stack Kosong"<<endl;
	}
	else{
		bantu=top;
		while(bantu!=NULL){
			cout<<"|\t"<<bantu->data<<"\t|"<<endl;
			bantu=bantu->next;
		}
		cout<<endl;
	}
}
