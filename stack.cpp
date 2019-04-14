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
void menu(){
	int pilih;
	cout<<"=================================="<<endl;
	cout<<"==========|Menu Pilihan|=========="<<endl;
	cout<<"=================================="<<endl;
	cout<<"|  1. Push Data\t\t\t |"<<endl;
	cout<<"|\t\t\t\t |"<<endl;
	cout<<"|  2. Pop Data\t\t\t |"<<endl;
	cout<<"|\t\t\t\t |"<<endl;
	cout<<"|  3. Top Data\t\t\t |"<<endl;
	cout<<"=================================="<<endl;
	cout<<"Masukkan pilihan : ";
	cin>>pilih;

	switch(pilih){
		case 1:push();
			break;
		case 2:pop();
      		break;
		case 3:topdata();
			break;
		default:
			cout<<"Pilihan Tidak Ada"<<endl;
	}
}
int main (){
	int i,pilih;
	cout<<"Jumlah data yang ingin di masukkan :";
	cin>>i;
	for(int k=0;k<i;k++){
		listdata();
	}
	printstack();
	cout<<endl<<endl;
	while(pilih>0){
		menu();
		printstack();
		cout<<endl<<endl;
	}
	return 0;
}
