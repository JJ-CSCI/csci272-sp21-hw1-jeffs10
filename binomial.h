#ifndef BINOMIAL
#define BINOMIAL

class Binomial {

    double coefft1, coefft2;

    int power1, power2;

    public: Binomial (double c1 = 1.0, int p1 = 1, double c2 = 1.0, int p2 = 1);
  
    

    int SetPower (int idx, int pwr);

      int GetPower(int idx) const;

        int Add (const Binomial other);
   

        void Multiply (double coefft, int pwr);

          void Multiply (double f);


   double GetCoefficient (int idx) const;

    
}
;
