#include <iostream>

using namespace std;

class Vetor2d {
  public:
    int x, y;

    Vetor2d() {
      x = 0;
      y = 0;
    };

    Vetor2d(int a, int b) {
      x = a;
      y = b;
    };

    // Vetor2d soma(Vetor2d v) {
    //   int newX = x+v.x;
    //   int newY = y+v.y;
    //   Vetor2d ret(newX, newY);
    //   cout<<"O valor da soma entre: (" << x << ", " << y << ") e (" << v.x << ", " << v.y << ") " << " é: (" << ret.x << ", " << ret.y << ")." << endl;
    //   return ret;
    // }

    Vetor2d operator +(Vetor2d v) {
      int newX = x+v.x;
      int newY = y+v.y;
      Vetor2d ret(newX, newY);
      cout<<"O valor da soma entre: (" << x << ", " << y << ") e (" << v.x << ", " << v.y << ") " << " é: (" << ret.x << ", " << ret.y << ")." << endl;
      return ret;
    }
};

int main() {
  Vetor2d v1(3, 4), v2(2, 3), v3;
  v3 = v1 + v2;
}