#ifdef STUDENT_H
#define STUDENT_H
// #pragma once

#include<iostream>

namespace kimhynso2549013
{
  struct student
  {
    int id{};
    char grade{};

  };

  student inputstudent();
//   {
//     student s{};
//     std::cout<<"enter id"<<std::endl;
//     std::cin>>s.id;
//     std::cout<<"enter grade"<<std::endl;
//     std::cin>>s.grade;
//     return s;
//   }
  
  void printstudent(const student &s);
//   {
//     std::cout<<"ID:"<<s.id<<std::endl;
//     std::cout<<"Grade:"<<s.grade<<std::endl;

//   }

}
#endif;