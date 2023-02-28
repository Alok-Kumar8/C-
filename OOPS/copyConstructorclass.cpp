class student{
    int age;
     
    public:
    char *name;

    student(int age, char *name){
        this->age = age;
        this->name = new char[strlen(name)+1];
        strcpy(this->name, name);
    }

    void display(){
        cout << age << "  " << name << endl;
    }

    student(student const &s){
        this-> age = s.age;
        this-> name = new char[strlen(s.name)+1];
        strcpy(this->name, s.name);
    }
};