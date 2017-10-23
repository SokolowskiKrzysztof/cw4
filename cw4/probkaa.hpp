#ifndef PROBKA_HPP
#define PROBKA_HPP // PEOBKA_HPP



class Probka {
    public:
 double t;
 double x;
 probka();
 friend std::ostream& operator<<(std::ostream& stream,const Probka& probka) ;

 Probka(double _t,double _x);
};

#endif

