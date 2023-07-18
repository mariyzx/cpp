// Apresente modificações para que o seguinte código não contenha erros. Justifique a resposta.

#include <iostream.h>

class Base {
  private:
    int b1;

  protected:
    int b2;

  public:
    int b3;
    Base() {}
};

class Derivada1 : private Base {
  private:
    int d11;

  public:
    int d12;
    Derivada1()
    {
      b2 = 0;
    }
};

class Derivada2 : public Base {
  private:
    int d21;

  public:
    int d22;
    Derivada2()
    {
      b2 = 0;
      b1 = 0;
    }
};

main()
{
  Base ObjBase;
  Derivada1 ObjDeriv1;
  Derivada2 ObjDeriv2;
  ObjBase.b1 = 2;
  ObjBase.b3 = 2;
  ObjDeriv1.b1 = 7;
  ObjDeriv1.b3 = 7;
  ObjDeriv2.b2 = 8;
  ObjDeriv2.b3 = 8;
}
