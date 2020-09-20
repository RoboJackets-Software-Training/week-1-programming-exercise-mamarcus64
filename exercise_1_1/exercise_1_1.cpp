//Do not edit the next 4 lines
#include <iostream>
#include <vector>

int main() {
	std::cout << "Use the wasd keys and enter to input a direction, or the E key to stop" << std::endl;

    // Write your code for step 1 here
	std::vector<float> wheelSpeeds(4);
    // Write your code for step 2 here
   for(int i = 0; i < wheelSpeeds.size(); i++) {
   	 wheelSpeeds[i] = 0;
   }
    // Do not edit the next 5 lines
    bool keep_going = true;
    char direction;

    while (keep_going) {
        std::cin >> direction; //At the begining of every iteration look for an input from the user
        // Write rest of code here (within while loop)
        if (direction == 'w') {
        	for (int i = 0; i < wheelSpeeds.size(); i++) {
        		wheelSpeeds[i] = 1;
        	}
        } else if (direction == 'a') {
        	wheelSpeeds[0] = 0.5;
			wheelSpeeds[2] = 0.5;
			wheelSpeeds[1] = 1;
			wheelSpeeds[3] = 1;
        } else if (direction == 's') {
        	for (int i = 0; i < wheelSpeeds.size(); i++) {
			  wheelSpeeds[i] = -1;
			}
        } else if (direction == 'd') {
        	wheelSpeeds[1] = 0.5;
			wheelSpeeds[3] = 0.5;
			wheelSpeeds[0] = 1;
			wheelSpeeds[2] = 1;
        } else if (direction == 'e') {
        	for (int i = 0; i < wheelSpeeds.size(); i++) {
  				wheelSpeeds[i] = 0;
			}
			std::cout << "Shutting down" << std::endl;
			keep_going = false;
        } else {
        	std::cout << "Sorry, I didn't get that.  Try again." << std::endl;
        }
        for (int i = 0; i < 4; i++) {
  			std::cout << "wheel at index " << i << " has speed: " << wheelSpeeds[i] << std::endl;
		}
        //
    }

}
