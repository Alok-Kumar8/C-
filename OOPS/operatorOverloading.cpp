class fraction{
    private:
    int numerator;
    int denominator;

    public:
     fraction(int numerator, int denominator){
        this->numerator = numerator;
        this->denominator = denominator;
        }

        void print(){
            cout << numerator << " / " << denominator<< endl;
        }

        void simplify(){
            int gcd = 1;
            int j = min(numerator, denominator);

            for(int i = 1; i < j; i++){
                if(numerator%i==0 && denominator%i==0){
                    gcd = i;
                }
            }
            this->numerator = this->numerator/gcd;
            this->denominator  = this->denominator/gcd;
        }

        fraction add(fraction const &f2)const{
            int lcm = denominator*f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;

            int num = x*numerator + y*f2.numerator;

           fraction fnew(num, lcm);
           fnew.simplify();
           return fnew;
        }

        fraction operator+(fraction const &f2)const{
            int lcm = denominator*f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;

            int num = x*numerator + y*f2.numerator;

           fraction fnew(num, lcm);
           fnew.simplify();
           return fnew;
        }

        fraction operator*(fraction const &f2)const{
            int n = f2.numerator*numerator;
            int d = denominator*f2.denominator;
             fraction fnew(n, d);
            fnew.simplify();
            return fnew;
        }

        void multiply(fraction const &f2){
            numerator = f2.numerator*numerator;
            denominator = denominator*f2.denominator;
             simplify();
        }

        bool operator==(fraction const &f2)const{
            return(numerator==f2.numerator && denominator==f2.denominator);
        }

     
};