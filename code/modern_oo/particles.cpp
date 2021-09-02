#include <cstdlib> // pour std::rand()
#include <iostream>
#include <string>

// lauch via `make && ./particles` -> expression in my Makefile

class Particle
 {
  public  :
    Particle( double mass ) : mass_(mass) {}
    Particle( const Particle & ) = delete;
    double mass() { return mass_ ; }
    virtual std::string name() { return "Particle" ; }
    //virtual ~Particle() {}
    virtual ~Particle() = default;
  private  :
    //Particle( const Particle & ) ; // non copiable -> move to public with delete constructor
    double mass_ ;
 } ;

class ChargedParticle : public Particle
 {
  public  :
    ChargedParticle( double mass, double charge )
     : Particle(mass), charge_(charge) {}
    double charge() { return charge_ ; }
    // adding override
    virtual std::string name() override { return "ChargedParticle" ; }
  private  :
    double charge_ ;
 } ;

void print( Particle & p  )
 {
  std::cout << p.name() << std::endl ;          
  std::cout << "  mass = " << p.mass() << std::endl ;         
 }

int main()
 {
  for ( int i = 0 ; i < 5 ; ++i )
   {
    if ( std::rand() < (0.5 *  double(RAND_MAX)) )
     {
      Particle p(2) ;
      print(p) ;
     }
    else
     {
      ChargedParticle p(1,1) ;
      print(p) ;
      std::cout << "  charge = " << p.charge() << std::endl ;         
     }
   }
 }
 
