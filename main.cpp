#include <string>
#include <vector>
#include <iostream>

std::vector<std::string> solution( const std::string &s)
{
  std:: string b =s;
  int x = b.length();
  if(x%2 !=0){
    b.push_back('_');
    x++;
  };
  
 
  std :: string temp ="";
  std::vector<std::string> a;
  int i=0;
  while(i< x-1){
    temp+= b[i++];
    temp+= b[i++];
    a.push_back(temp);
    temp="";
    
  };
  return a;
  
  
  
   
}
