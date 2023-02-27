class complexNumber{
    private:
    int real;
    int imaginary;

    public:

    complexNumber(int real, int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    void print(){
       cout << real << " + i" << imaginary << endl;
    }


    void plus(complexNumber const &c2){
        real = real + c2.real;
        imaginary = imaginary+c2.imaginary; 
    }

    void multiply(complexNumber const &c2){
        real = real * c2.real;
        imaginary = imaginary * c2.imaginary;
    }
};