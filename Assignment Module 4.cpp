

   Q. WAP to print “Hello World” using C++
   Ans.
       #include<iostream>
        using namespace std; 
        main()
      {
	cout << "Helloo World!"<<endl;
	cout << "Welcome to C++";
      }

   Q. What is OOP? List OOP concept...
   Ans.
      OOP stands for Object-Oriented Programming. It is a programming paradigm that uses objects, which are instances of classes, to design software.
      OOP provides a way to create reusable and maintainable code by using concepts like inheritance, encapsulation, and polymorphism.

   Here are some OOP concepts in C++:

   1. Class: A class is a blueprint for creating objects. It defines a set of attributes (variables) and methods (functions) that an object can have.

   2. Object: An object is an instance of a class. It is created by using the class as a blueprint and assigning values to its attributes.
   
   3. Inheritance: Inheritance is a mechanism that allows one class to inherit the properties of another class. It promotes code reusability and organization.

   4. Encapsulation: Encapsulation is the process of hiding the internal details of a class and exposing only the necessary features through methods. It helps
                    in achieving data security and control.

   5. Polymorphism: Polymorphism is a concept that allows objects of different classes to be treated as objects of a common superclass. It enables a single 
                    interface to represent different types of objects, leading to more flexible and extensible code.

   6. Abstraction: Abstraction is the process of simplifying complex systems by breaking them down into smaller, more manageable parts. In OOP, abstraction is 
                  achieved by using abstract classes and interfaces, which define common features for a group of related classes without providing a complete 
                  implementation.
  

   Q. What is the difference between OOP and POP? 
   Ans.
        
                     OOP	                   POP
 
  1.           Object oriented.	            Structure oriented.
   
  2. Program is divided into objects.	Program is divided into functions.
    
  3.   Bottom-up approach.	        Top-down approach.

  4.  Inheritance property is used.	Inheritance is not allowed.

  5.   It uses access specifier.	It doesn’t use access specifier.

  6.  The existing code can be reused.	No code reusability.

  7.  Use for solving big problems.	Not suitable for solving big problems.
      


  Q. WAP to create simple calculator using class..
  Ans.
      #include<iostream>
       using namespace st d;
       main()
    {
	int a,b;
	cout<< "Enter the value of a:";
	cin>>a;
	cout<< "Ener the value of b:";
	cin>>b;
	cout<< "\nThe Addition of a and b is:"<<a+b;
	cout<< "\nThe Subtraction of a and b is:"<<a-b;
	cout<< "\nThe Multiplication of a and b is:"<<a*b;
	cout<< "\nThe Division of a and b is:"<<a/b;
   } 


  Q. Write a program of Addition, Subtraction, Division, Multiplication using Constructor.  
  Ans.
      #include <iostream>
       using namespace std;
       class Calculator 
   {
     public:
      int add(int a, int b) 
      {
        return a + b;
      }
    
    int subtract(int a, int b) 
      {
        return a - b;
      }
    
    int multiply(int a, int b) 
      {
        return a * b;
      }
    
    int divide(int a, int b) 
      {
        if (b == 0) 
		{
            throw "Division by zero!";
      }
        return a/b;
   
  };
     int main() 
   {
          Calculator calc;
          try 
	{
        
           cout << "Addition: " << calc.add(100,50) << endl;
   //     cout << "Subtraction: " << calc.subtract(100,50) << endl;
   //     cout << "Multiplication: " << calc.multiply(100,50) << endl;
   //     cout << "Division: " << calc.divide(100,50) << endl;
    
        }

    catch (const char* msg) 
	{
        cerr << msg << endl;
        }   

    }


  Q. Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best  
    performance. Member functions input data, calculate average runs, Display data. (Single Inheritance) ...

  Ans.
        
          #include <iostream>
           using namespace std;
           class Cricketer {
           
                public:
                  string name;
                  int totalRuns;
                    Cricketer(string n, int tr) : name(n), totalRuns(tr) {}

                      void displayInfo() {
                      cout << "Name: " << name << endl;
                      cout << "Total Runs: " << totalRuns << endl;
                    }
          };

           class Batsman : public Cricketer {
             
                public:
                   int bestPerformance;
                   int batsmanScore;
                   float averageRuns;
                   Batsman(string n, int tr, int bp, int bs)
                   : Cricketer(n, tr), bestPerformance(bp), batsmanScore(bs) {}

                   void calculateAverage() {
                                         averageRuns = static_cast<float>(totalRuns) / bestPerformance;
               }
  
                 void displayinfo() {
                 
                    Cricketer::displayInfo();
                    cout << "Best Performance: " << bestPerformance << endl;
                    cout << "Batsman Score: " << batsmanScore << endl;
                    cout << "AverageRuns: " << averageRuns << endl;
                }
           };


        int main() {
  
          Batsman b("Virat Kohli", 14000, 254, 85);
          b.calculateAverage();
          b.displayinfo();

          return 0;
       }


  Q. Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having member 
    salary. Write necessary member function to initialize, read and write data. Write also Main function (Multiple Inheritance) 
  Ans.
     #include <iostream>
      using namespace std;
      class Person {
      public:
        string name;
        int age;
        void displayData() {
               cout << "Name:" << name << endl;
               cout << "Age:" << age << endl;
         }
     };
      class Student {
               public:
                int percentage;
               void displayData() { cout << "Percentage:" << percentage << endl; }
           };
           class Teacher : public Person, public Student {
              public:
                 int salary;
                void displayData() { cout << "Salary:" << salary; }
       };
              int main() {
                      Teacher t;
                             t.name = "Hatim";
                             t.age = (20);
                             t.percentage = (90);
                             t.salary = (20000);

                             t.Person::displayData();
                             t.Student::displayData();
                             t.displayData();
     }
       

  Q. Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number.
     Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result 
     can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance)...

  Ans.     
       #include <iostream>
        using namespace std;
        class Students
  {
       public:
            int roll_number;
  };
        class Testmarks
          {
           public:
             int marks1, marks2;
  };
       class Result : public Students, public Testmarks
   {
      public:
          int total_marks;

         void get_roll_number()
   {
     cout<< "Enter your Roll Number: ";
     cin>>roll_number;
   }
     void get_Testmarks()
   {
     cout<< "Enter the marks of Maths: ";
     cin>>marks1;
     cout<< "Enter the marks of English: ";
     cin>>marks2;
   }
     void get_total_marks()
  {
     total_marks = marks1 + marks2;
  }
    void display_Result()
  {
    cout<< "\nRoll number:"<< 
        roll_number<<endl;
    cout<< "Enter the marks1:"<<marks1<<endl;
    cout<< "Enter the marks2:"<<marks2<<endl;
    cout<< "Enter totalmarks:"<< 
        total_marks<<endl;
    
   }
 };  
    int main()
  {
     Result r1;
     r1.get_roll_number();
     r1.get_Testmarks();
     r1.get_total_marks();
     r1.display_Result();
  }


 
 Q. Write a program to Mathematic operation like Addition, Subtraction,Multiplication, Division Of two number using different parameters and 
    Function Overloading...
 Ans.
     #include <iostream>
      using namespace std;
      class overloadingDemo
    {
      public:
           int a,b;
             void add (int a, int b)
      {
       cout<< a+b << endl;
      }
       void subtract (float a,float b)
      {
       cout<< a-b <<endl;
      }
       void multiply (int a,int b,int c)
      {
       cout<< a*b*c <<endl;
      }
       void divide (float x,float y)
     {
       cout<< x/y;
     }   
  };
    int main()
 {
  overloadingDemo od;
  od.add(10,20);
  od.subtract(45.61f,78.09f);
  od.multiply(1, 2, 3);
  od.divide(50, 10);
 }


 Q. Write a program to calculate the area of circle, rectangle and triangle using Function Overloading...
 Ans.  
     #include <iostream>
      using namespace std;
      class overloadingArea
   {
      public:
            // Area of Rectangle
             
            int length,breadth;
            void area(int l,int b)
     {
            cout<< l*b <<endl; 
     }
      
         // Area of Triangle
      
           float x=0.5;
           void Area(float x,int b,int h)
     {
          cout<< x*b*h <<endl;  
     }
      
         // Area of Circle
     
           float y=3.14;
           void a(float y,int r,int R)
     {
          cout<< y*r*R;
     }
  };
   int main()
  {
    overloadingArea a;
    a.area(10, 25);
    a.Area(0.5, 10, 25);
    a.a(3.14, 10, 25);
 }



  Q. Write a program to swap the two numbers using friend function without using third variable...
  Ans.
      #include<iostream>
       using namespace std;

     class SwapNumbers {
                int a, b;

                   public:
                      SwapNumbers(int a, int b) : a(a), b(b) {}

                       friend void swap(SwapNumbers &sn);

                      void printNumbers() {
                       cout << "a: " << a << ", b: " << b << endl;
                }
     };

           void swap(SwapNumbers &sn) {
           sn.a = sn.a + sn.b;
           sn.b = sn.a - sn.b;
           sn.a = sn.a - sn.b;
     }

     int main() {
              SwapNumbers nums(5, 10);
              cout << "Before swapping: ";
              nums.printNumbers();

              swap(nums);
              cout << "After swapping: ";
              nums.printNumbers();

              return 0;
     } 


  Q. Write a program to find the max number from given two numbers using friend fumction in c++...
  Ans.
      #include<iostream>
       using namespace std;

       class MaxNumber {
       int a, b;

           public:
              MaxNumber(int a, int b) : a(a), b(b) {}

             friend void findMax(MaxNumber &mn);
     };

      void findMax(MaxNumber &mn) {
           if (mn.a > mn.b)
           cout << "Max number: " << mn.a << endl;
            else if (mn.a < mn.b)
           cout << "Max number: " << mn.b << endl;
           else
           cout << "Both numbers are equal." << endl;
    }

    int main() {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;

        MaxNumber mn(a, b);
        findMax(mn);

        return 0;
  }


  Q. Write a program of to swap the two values using templates...
  Ans
     #include <iostream>
      using namespace std;
      template <class T> void swapping(T &a, T &b) {
       
       T temp = a;
       a = b;
       b = temp;
    }
     int main() {
     int x = 10, y = 20;

     cout << "Before swapping :" << 'X' << x << 'Y' << y << endl;
     swapping(x, y);
     cout << "\nAfter swapping :" << 'X' << x << 'Y' << y << endl;
  } 



   Q. Write a program of to sort the array using templates...
   Ans. 
      #include<iostream>
       using namespace std;

       template<class T> 
       void swap(T *xp, T *yp) {
       T temp = *xp;
       *xp = *yp;
       *yp = temp;
    }

     template<class T>
     void bubbleSort(T arr[], int n) {
     int i, j;
     for (i = 0; i < n-1; i++) {
       for (j = 0; j < n-i-1; j++) {
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
       }
    }
  }

    template<class T>
    void printArray(T arr[], int size) {
     int i;
      for (i=0; i < size; i++)
       cout << arr[i] << " ";
      cout << endl;
  }
 
   int main() {
      int arr[] = {64, 34, 25, 12, 22, 11, 90};
      int n = sizeof(arr)/sizeof(arr[0]);
      
      bubbleSort(arr, n);
      cout<<"Sorted array: \n";
      printArray(arr, n);
      return 0;
  }













