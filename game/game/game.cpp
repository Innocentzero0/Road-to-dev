#include <iostream>

//int main() {
//	std::cout << "Do you want to play a game? (y/n): ";
//	std::string response;
//	std::cin >> response;
//	/*the response[0] picks the first character of a string
//	* and the tolower(response[0] converts the first letter which was picked
//	* and converts it to lower case if it is not in lower case and this function 
//	* only works for characters but not strings
//	*/
//	if (tolower(response[0]) == 'y') {          
//		std::cout << "lets play a game!" << std::endl;
//		std::system("pause");
//	}
//	else if (tolower(response[0]) == 'n') {
//		std::cout << "Maybe next time then... See ya!" << std::endl;
//	}
//	else {
//		std::cout << "hmmm... i don't quite understand you." << std::endl;
//	}
//
//
//}
// the code can also be written this way
//int main() {
//	std::cout << "Do you want to play a game? (y/n): ";
//	char response;
//	response = getchar();
//	if (tolower(response) == 'y') {
//		std::cout << "lets play a game!" << std::endl;
//		std::system("pause");
//	}
//	else if (tolower(response) == 'n') {
//		std::cout << "Maybe next time then... See ya!" << std::endl;
//	}
//	else {
//		std::cout << "hmmm... i don't quite understand you." << std::endl;
//	}
//
//}

//the conversion process can also be put inside a function

char conversion(char convert) {    
	return tolower(convert); // or tolower(response[0] if you used the first approach
}
// using the function instead of just converting the value directly helps preserve the original data
//int main() {
//	std::cout << "Do you want to play a game? (y/n): ";
//	std::string response_req;
//	std::cin >> response_req;
//	char response = conversion(response_req[0]);
//	if (response == 'y') {
//		std::cout << "lets play a game!" << std::endl;
//		std::cout << "What difficulty would you like to play on? " << std::endl
//				  << "Easy" << std::endl
//				  << "Normal" << std::endl
//				  << "Hard" << std::endl;
//		std::string setting_req;
//		std::cin >> setting_req;
//		char setting = conversion(setting_req[0]);
//		if (setting == 'e') {
//			std::cout << "I guess i can call you a chicken then." << std::endl;
//			}
//		else if (setting == 'n') {
//			std::cout << "You pass, barely" << std::endl;
//		}
//		else if (setting == 'h') {
//			std::cout << "That's how you do it!!" << std::endl;
//		}
//		else {
//			std::cout << "Are you even prepared for this?? " << std::endl;
//		}
//
//	}
//	else if (response == 'n') {
//		std::cout << "Maybe next time then... See ya!" << std::endl;
//	}
//	else {
//		std::cout << "hmmm... i don't quite understand you." << std::endl;
//	}
//}

int main() {

	std::cout << "Do you want to play a game? (y/n): ";

	std::string response_req;
	std::cin >> response_req;

	char response = conversion(response_req[0]);

	if (response == 'y') {
		std::cout << "lets play a game!" << std::endl;
		std::cout << "Have you beaten this game before? (yes/no)" << std::endl;

		std::string reply;
		std::cin >> reply;
		bool beatGame;

		if (reply == "yes") {
			beatGame = true;
		}
		else if (reply == "no") {
			beatGame = false;
		}

		std::cout << "What difficulty would you like to play on? " << std::endl
				  << "Easy" << std::endl
				  << "Normal" << std::endl
				  << "Hard" << std::endl 
				  << "nightmare" << std::endl;

		std::string setting_req;
		std::cin >> setting_req;

		if ((setting_req == "easy" || setting_req == "medium" || setting_req == "hard") && beatGame) {
			std::cout << "I guess i can call you a chicken then. But you're lucky, you get to respawn" << std::endl;
			}
		else if (setting_req == "easy" || setting_req == "medium" || setting_req == "hard") {
			std::cout << "Beat the game to unlock nightmare difficulty and other new game plus content. You get to respawn" << std::endl;
		}
		else if ((setting_req == "nightmare") && beatGame) {
			std::cout << "Get ready for a world of pain soldier!!!" << std::endl;
		}
		else {
			std::cout << "this game doesn't seem to be for you peasant";
		}
	}
	else if (response == 'n') {
		std::cout << "Maybe next time then... See ya!" << std::endl;
	}
	else {
		std::cout << "hmmm... i don't quite understand you." << std::endl;
	}
	std::system("pause");
}
