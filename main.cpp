#include <QCoreApplication>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   // std::cout << "ULLONG_MIN = " << ULLONG_ << std::endl;
    int b=4,c=5, y=2;
     y=y+b/c;
    std::cout << "y = " << y << std::endl;
    std::cout << "ULLONG_MAX = " <<ULLONG_MAX<< std::endl;
      std::cout << "LLONG_MAX = "<< LLONG_MAX<<std::endl;
       std::cout << "LLONG_MIN = "<< LLONG_MIN<<std::endl;
      std::cout << "INT_MAX = " <<INT_MAX<< std::endl;
    //   std::cout << "INT_MIN = " <<INT_MIN<< std::end;
      int d=-2147483649;
         std::cout << "INT_MIN = -2147483649"<< std::end;
    return a.exec();
}
