class student{
   public:
   int age;
   int const rollNumber;
   int &x;          // ref variable for age

   student(int r, int age) : rollNumber(r), age(age), x(this->age) {

   }
};