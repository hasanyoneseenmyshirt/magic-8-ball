#include <iostream>
#include <cstdlib>


int main(){
  //Magic 8 ball to make all your desions for you. Never have to thing about anything in your life again.i am not creative enough to come up with too many responces so it only 3.

  std::cout << "Magic 8 Ball: ";
  srand(time(NULL));
  
  int answer = std::rand() % 3;
  
  std::cout << answer;
  
  if(answer==0){
    std::cout<< " It is certain.";
  }
  if(answer==2){
    std::cout << " Very doubtful.";
  }
   else(){
     std::cout << "I don`t see why it wouldnt";
   }
  
  
  
}
