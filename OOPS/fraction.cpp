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

        void add(fraction f2){
            int lcm = denominator*f2.denominator;
            int x = lcm/denominator;
            int y = lcm/f2.denominator;

            int num = x*numerator + y*f2.numerator;

            numerator = num;
            denominator = lcm;

            simplify();
        }

     
};