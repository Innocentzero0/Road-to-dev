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

char conversion(char response_req) {
	char new_response = tolower(response_req);    // or tolower(response[0] if you used the first approach
	return new_response;
}

int main() {
	std::cout << "Do you want to play a game? (y/n): ";
	char response_req = getchar();
	char response = conversion(response_req);
	if (response == 'y') {
		std::cout << "lets play a game!" << std::endl;
		std::system("pause");
	}
	else if (response == 'n') {
		std::cout << "Maybe next time then... See ya!" << std::endl;
	}
	else {
		std::cout << "hmmm... i don't quite understand you." << std::endl;
	}

}
