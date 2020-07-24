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
                std::cout << "The computer will now try to guess your answer." << std::endl;
                playerIsPicking = false;
                break;
            }
            else if (playerNumPick >= 100)
            {
                std::cout << "The computer will now try to guess your answer." << std::endl;
                playerIsPicking = false;
                break;
            }
            else
            {
                std::cout << "You have to choose between 0 and 100!" << std::endl;
                break;
            }

        } while (playerIsPicking == true);
    }



    //computer's turn
    else (playerIsPicking == false);
    { 

        bool computerIsGuessing = true;

        do
        {

            std::cout << "Is your number below or above my guess?" << std::endl;

        

            if (/* condition */)
            {
                /* code */
                
            }
            else if (           )
            {
                /* code */
            }
            else
            {
                std::cout << "I won! You picked:" + playerNumPick << std::endl;
                computerIsGuessing = false;
            }

        } while (computerIsGuessing = true);

    }

    return 0;
};