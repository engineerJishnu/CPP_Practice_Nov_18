	//  file name : hello.cpp
	//  for compiling the program use....g++ -g -Wall -o hello hello.cpp
	// to run the program use...../hello

	//-----all the headers

	#include <cstdio> // for printf()
	#include <iostream>
	#include <string>
	#include <memory> // for unique_ptr
	#include <cstdlib> // for malloc()
	#include <thread>

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
	}; // do not forget put ";" after "}"

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
			std::cout << "the data is " << n -> data << std::endl;
			n = n -> next;
		}
	}

	// main - start of the programs

	 int main() {

		system("clear"); // clears the screen
		printf("Hello world!\n");
		std::cout << "C++ is a tough Programming Language." << std::endl;
		display ("C++ is a very tough language and is enjoyable one. This done using function.");

		 // creating an object for class
			classParent object1;
			object1.resultDisplay();

	 		std::this_thread::sleep_for(std::chrono::milliseconds(2000)); // take a deep breathe

	  	std::unique_ptr<classParent> object2 (new classParent);
			object2 -> resultDisplay();   // pointer

			// struct example

			struct animalStruct dog;
			std::cout << "Enter the number of legs dog has.." << std::endl;
			std::cin >> dog.noOflegs;
			structDisplay(dog);

			// struct with pointers

			struct animalStruct *catptr, cat;
			catptr = &cat; // address of struct cat is stored in catptr
			std::cout << "Enter the number of legs cat has.." << std::endl;
		  std::cin >> catptr -> noOflegs;
		  structDisplay(*catptr);
			// linked list

			struct Node *head = NULL;
			struct Node *second = NULL;
			struct Node *third = NULL;

			//head = (struct Node*) malloc(sizeof(struct Node));
			head = new struct Node;
			if (!head)
			{
   			std::cout << "Memory allocation failed\n";
			}
			
			second = (struct Node*) malloc(sizeof(struct Node));
			third = (struct Node*) malloc(sizeof(struct Node));

			head -> data = 10;
			head -> next = second;

			second -> data = 20;
			second -> next = third;

			third -> data = 30;
			third -> next = NULL;

			printlist(head);

			//free(head);
			delete head;
			free(second);
			free(third);

			return 0;
	}
