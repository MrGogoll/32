using namespace std;
#include <iostream>
struct gnom {
    int voz;
    int ros;
    char p;
};

int main()
{
    int M, W;
    M = 1;
        W = 2;
    gnom a;
    a.voz = 10;
    a.ros = 134;
    a.p = W;
    gnom b;
    b.voz = 38;
    b.ros = 68;
    b.p = M;
    gnom c;
    c.voz = 38;
    c.ros = 96;
    c.p = M;
    if ((a.p + b.p + c.p) <= 4 ){
     
        cout << "gnomo-patriarhat";
}
    else {
      
        cout << "gnomo-femenizm";
    }


}
