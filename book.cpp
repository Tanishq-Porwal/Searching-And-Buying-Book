#include<iostream>
using namespace std;
class Book
{
	string title;
	string author;
	string publisher;
	public:
		int price;
		int stock;
		void book1();
		void book2();
		void book3();
		void display(Book b);
		void search();
};
void Book::book1()
{
	title = "Computer Science";
	author = "Tanishq Porwal";
	publisher = "Oxford Publications";
	price = 4500;
	stock = 15;
}
void Book::book2()
{
	title = "Digital Electronics";
	author = "M. Morris Mano";
	publisher = "Cambridge University Press";
	price = 3800;
	stock = 11;
}
void Book::book3()
{
title = "Object Orientedc Programming";
author = "E. Balaguruswamy";
publisher = "Tata McGraw-Hill";
price = 3950;
stock = 8;
}
void Book::display(Book b)
{
cout<<"Title: "<<b.title<<"\nAuthor: "<<b.author<<"\nPublisher: "<<b.publisher<<endl;
cout<<"Price: "<<b.price<<"\nStock: "<<b.stock<<endl;
}
void Book::search()
{
	Book b1, b2, b3;
	b1.book1();
	b2.book2();
	b3.book3();
	int temp, quantity;
	string name;
	cout<<"Enter the name of book: "<<endl;
	cin>>name;
	if(name=="ComputerScience" || name=="computerscience")
	{
		b1.display(b1);
		cout<<"How many books you want to buy: "<<endl;
		cin>>quantity;
		temp= b1.price * quantity;
		cout<<"Total Amount is: "<<temp<<endl;
		b1.stock = b1.stock - quantity;
		b1.display(b1);
	}
	else if(name=="DigitalElectronics" || name=="digitalelectronics")
	{
		b2.display(b2);
		cout<<"How many books you want to buy: "<<endl;
		cin>>quantity;
		temp= b2.price * quantity;
		cout<<"Total Amount is: "<<temp<<endl;
		b2.stock = b2.stock - quantity;
		b2.display(b2);
	}
	else if(name=="ObjectOrientedProgramming"|| name=="objectorintedprograamming")
	{
		b3.display(b3);
		cout<<"How many books you want to buy: "<<endl;
		cin>>quantity;
		temp= b3.price * quantity;
		cout<<"Total Amount is: "<<temp<<endl;
		b3.stock = b3.stock - quantity;
		b3.display(b3);
	}
	else
		cout<<"Book not available in stock.";
}
int main()
{
	Book s;
	s.search();
	return 0;
	
}
