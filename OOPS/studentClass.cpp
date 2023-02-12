class Student{
    public:
    string name;
    int age;

    private:
    int rollNumber;

    public:
    void display(){
        cout << age << " " << name << endl;
    }

    int getRollNumber(){
        return rollNumber;            // private property can br accessed within the same class
    }

    int setRollNumber(int a){
        rollNumber = a;
    }

    void displayRollNumber(){
        cout << rollNumber << endl;
    }
};
