#include <iostream>

int main() {

    int playerNumPick;
    bool playerIsPicking = true;

    std::cout << "Please choose a number between 0 and 100." << std::endl;
    std::cin >> playerNumPick;
    
    //player's turn
    if (playerIsPicking == true)
    {
        do
        {
            if (playerNumPick <= 0)
            {
                std::cout << "The computer will try to guess your answer." << std::endl;
                playerIsPicking = false;
                break;
            }
            else if (playerNumPick >= 100)
            {
                std::cout << "The computer will try to guess your answer." << std::endl;
                playerIsPicking = false;
                break;
            }
            else
            {
                std::cout << "You have to choose between 0 and 100!" << std::endl;
            }

        } while (playerIsPicking == true);
    }



    //computer's turn
    else (playerIsPicking == false);
    { 

        int computerGuess[100];
        std::cout << computerGuess;
    }


    return 0;
}
