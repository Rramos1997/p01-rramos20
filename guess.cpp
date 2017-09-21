#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()  {

srand ( time(NULL) );
int randomNumber;
randomNumber = rand() % 10+1;
int Guess;
int AbsValue;
int Difference;

    cout<<"Guess the Computer's Number.(Between 1-10)"<<endl;

cin>>Guess;
if (Guess!=randomNumber){
Difference = Guess - randomNumber;
AbsValue = abs(Difference);
  
cout<<"You were off by "<<AbsValue<<". Sorry, you lose." <<endl;
cout<<"My number was "<<randomNumber<<endl;

}else if (Guess==randomNumber){ 

cout<<"Wow! You guessed it, you win!"<<endl;}
 
 return 0;
}
