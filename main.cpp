#include <iostream>
#include "mathfu.h"

int main() {
  typedef double (*pfu)(double,double);
  pfu pfunctions[] = {
     add,subtr,mult,divide,
     raisepow
  };
  std::string link[] = {
     " плюс "," минус ",
     " умножить на "," разделить на ",
     " в степени "
  };
  double num1, num2;
  int num3;
  std::cout << "Выберите первое число: ";
  std::cin >> num1;
  std::cout << "Выберите второе число: ";
  std::cin >> num2;
  std::cout<<"Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
  std::cin >> num3;
  if(!num2 && num3 == 4){
    std::cout<<"Ошибка! Деление на ноль\n";
  }else{
    std::cout<<num1<<link[num3-1]<<num2<<" = "<<
    pfunctions[num3-1](num1,num2)<<"\n";
  }

  return 0;
}
