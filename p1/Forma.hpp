#ifndef FORMA_HPP
#define FORMA_HPP

class Forma {
   public:
    Forma();
    virtual ~Forma();

   protected:
    virtual unsigned int calcularArea() const = 0;

   private:
    unsigned int dado;
};

#endif