// Exercise 5

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {
	string page, line, location, temperature;
	ifstream inputFile("weather.xml");
	
	while (getline (inputFile, line)) {
 	    page.append(line);
 	    line.erase();
	}
	// Now page is a string that contains the whole xml page
	
	// Here you need to write something that finds and 
	// extracts location and temperature from the XML
	// data in the string page and stores them in 
	// the strings location and temperature respectively

	location = find_page(page, "location");
	temperature = find_page(page, "temp_c");
	
	cout << "Location: " << location << endl;
	cout << "Temperature: " << temperature << endl; 
	system("pause");
}
