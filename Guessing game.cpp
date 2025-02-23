#include <iostream>
#include <ctime>



using namespace std;
int main () {
    int choice;
    int player;
    int chance;

    cout << "Welcome to the Number Guessing Game!" << '\n';
    cout << "I'm thinking of a number between 1 and 100."<< '\n';
    cout << "You have 5 chances to guess the correct number"<< '\n';
    cout <<"Please select the difficulty level: Easy (10 chances) Medium (5 chances)3. Hard (3 chances)"<< '\n';


   do{
          cin >> choice;

        if(choice == 1){
            chance = 10;
            cout << "Great! You have selected the Easy difficulty level."<< '\n';
            break;
        }else if(choice == 2){
            chance = 5;
            cout << "Great! You have selected the Medium difficulty level."<< '\n';
            break;
        }else if(choice == 3){
            chance = 3;
            cout << "Great! You have selected the Hard difficulty level."<< '\n';
            break;
        }else {
            cout << "Invalid input, Please choose from 1 to 3" << '\n';
        }
   }while(choice < 1 || choice > 3);

    srand(time(NULL));
    int computer = rand() % 100 + 1;
    cout << computer << '\n';

    do{

    cout << "Enter your guess: ";
    cin >> player;
         if(player > computer ){
        cout << "Incorrect! The number is Less than "<<player<<"." << '\n';
        chance--;
        cout << "You have "<<chance<<" chances left ";


    }else if(player < computer){
        cout << "Incorrect! The number is Greater than "<<player<<"." << '\n';
        chance--;
        cout << "You have "<<chance<<" chances left ";

    }else {
        cout << "Congratulations! You guessed the correct number in "<<chance<<" attempts.";
         break;
    }

    }while(chance != 0);



    return 0;
}


