#ifndef CLASSE_A_HPP
#define CLASSE_A_HPP
class ClasseA {
   public:
    ClasseA() : dado{56} {}
    virtual ~ClasseA() = default;
    const int* minhaFunc(int* const par) const;

   private:
    int dado;
};
#endif