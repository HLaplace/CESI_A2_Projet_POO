//g++ -std=c++17 -Wall -Wextra -Werror main.cpp -o prog

#include <iostream>
#include <string>
#include <math.h>

int ask_coordonne(int num_point, std::string cote_point);
int fonction_carre(int nombre);

int main()
{
	int a = ask_coordonne(1, "x"); // x1
	int b = ask_coordonne(1, "y"); // y1

	int c = ask_coordonne(2, "x"); // x2
	int d = ask_coordonne(2, "y"); // y2

	float resultat_final = sqrt(fonction_carre(c-a)+fonction_carre(d-b));
	std::cout<<"Distance entres les 2 points : "<<resultat_final<<std::endl;
	return 0;
}

int ask_coordonne(int num_point, std::string cote_point){
	std::cout<< "entrez les coordonne en "<< cote_point << " du point " << num_point<<" : "<<std::endl;
	int value;
	std::cin >> value;
	return value;
}

int fonction_carre(int nombre){
	return nombre * nombre;
}