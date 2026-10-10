

#include "student.h"

namespace kimhynso2549013
{

  student inputstudent()
  {
    student s{};
    std::cout<<"enter id"<<std::endl;
    std::cin>>s.id;
    std::cout<<"enter grade"<<std::endl;
    std::cin>>s.grade;
    return s;
  }
  
  void printstudent(const student &s)
  {
    std::cout<<"ID:"<<s.id<<std::endl;
    std::cout<<"Grade:"<<s.grade<<std::endl;

  }

}


