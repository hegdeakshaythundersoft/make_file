#include<stdio.h>
#include<stdlib.h>
struct ll{
	int age;
	char gender;
	struct ll *next;
	struct ll *prev;
};
typedef struct ll node;
node *first=NULL;
node *last=NULL;
void create(int x,char gen){
	
	node *new=(node*)malloc(sizeof(node));
	new->age=x;
	new->gender=gen;
	if(first==NULL)
	{
		new->next=new;
		new->prev=new;
		first=last=new;
	}
	else
	{	new->prev=last;
		new->next=first;
		last->next=new;
		first->prev=new;
		last=new;
	}
}
void create_middle(int x,char gen,int key){
	
	node *middle=(node*)malloc(sizeof(node));
	node *find=first;
	middle->age=x;
	middle->gender=gen;
	do{
		if(key==find->age);
		break;
		find=find->next;
	}while(find!=first);
	middle->prev=find;
	find->next->next=middle->next;





}
void display(){
	node *temp=first;
	do{
		printf("%d\t%c\n",temp->age,temp->gender);
		temp=temp->next;
	}while(temp!=first);

}
void displayp(){
	node *tempp=last;
	do{
		printf("%d\t%c\n",tempp->age,tempp->gender);
		tempp=tempp->prev;
	}while(tempp!=last);

}
int main(){
	create(1,'A');
	create(2,'B');
	create(3,'C');
	create(4,'D');
	display();
	displayp();
	return 0;
	}
