class Student{
     public:
     int rollNumber;
     int age;

     Student(int rollNumber){
        cout << "Constructor 1 is called" << endl;
        cout << "this is storing adress : " << this << endl;
        this->rollNumber = rollNumber;
     }

     Student(int r, int a){
        cout << "Constructor 2 is called" << endl;
        rollNumber = r;
        age = a;
     }


     void display(){
        cout << "RollNumber is : " << rollNumber << endl;
        cout << "Age is: " << age << endl;
     }
};