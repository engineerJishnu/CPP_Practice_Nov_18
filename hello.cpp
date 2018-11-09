
//  hello.cpp
//  g++ -o hello hello.cpp
// ./hello

//-----all the headers

#include <cstdio>
#include <iostream>
#include <string>
#include <memory>
#include <cstdlib>

//function body

void display(const char *text){
	std::cout << text << std::endl;
}

//class

class classParent{
	private:
		std::string name;
		unsigned int age;
	public:
		classParent();
		~classParent();
		void resultDisplay();
};

// constructor

classParent::classParent(){
	//create the object1
}

// destructor

classParent::~classParent(){
	//destroys the object
}

//methods
void classParent::resultDisplay(){
	std::string Name;
	unsigned int Age;

	name = Name;
	age = Age;

	std::cout << "Please enter your name " << std::endl;
	std::cin >> name;

	std::cout << "Please enter your age " << std::endl;
	std::cin >> age;

	std::cout << "Name : " << name << "  Age : " << age << std::endl;
}

// an example of an struct

struct animalStruct {
	int noOflegs;
};

// functions for the struct
void structDisplay(animalStruct name) {

	std::cout << "\nDisplaying information" << std::endl;
	std::cout << "The animal has " << name.noOflegs << " legs."  <<std::endl;
}
// linked list

struct Node {
	int data;
	struct Node *next;
};

void printlist(struct Node *n) {
	std::cout << "This is an example of linear linked list using struct" << std::endl;
	while(n!= NULL) {
		std::cout << n -> data << std::endl;
		n = n -> next;
	}
}

// main - start of the programs

 int main() {

	system("clear");
	printf("Hello world!\n");
	std::cout << "C++ Programming Language." << std::endl;
	display ("C++ is very tough language");

	classParent object1;
	object1.resultDisplay();

  	std::unique_ptr<classParent> badASS (new classParent);
	badASS -> resultDisplay();

	// struct example

	struct animalStruct dog;
	std::cout << "Enter the number of legs dog has.." << std::endl;
	std::cin >> dog.noOflegs;
	structDisplay(dog);

	// struct with pointers

	struct animalStruct *catptr, cat;
	catptr = &cat;
	std::cout << "Enter the number of legs cat has.." << std::endl;
  std::cin >> catptr -> noOflegs;
  structDisplay(*catptr);
	// linked list

	struct Node *head = NULL;
	struct Node *second = NULL;
	struct Node *third = NULL;

	head = (struct Node*) malloc(sizeof(struct Node));
	second = (struct Node*) malloc(sizeof(struct Node));
	third = (struct Node*) malloc(sizeof(struct Node));

	head -> data = 1;
	head -> next = second;

	second -> data = 2;
	second -> next = third;

	third -> data = 3;
	third -> next = NULL;

	printlist(head);

	free(head);
	free(second);
	free(third);

	return 0;
}
