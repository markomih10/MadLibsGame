//Authors: 
#include <iostream>
#include <string>

int main()
{
        std::string occupation;
        int number=9;
        std::string place;
        std::string state;


        std::cout<<"Enter a occupation: ";
        std::cin>>occupation;
        std::cout<<"Enter a number: ";
        std::cin>>number;
        std::cout<<"Enter a place; ";
        std::cin>>place;
        std::cout<<"Enter a state; ";
        std::cin>>state;
        std::cout<<"Once upon a time, a young"<<occupation<<".He had"<<number<<"bottles of beer. After he had gotten drunk, he went to his"<<place<<"to sleep. The next day he was very"<<place<<std::endl;
  return 0;
}
