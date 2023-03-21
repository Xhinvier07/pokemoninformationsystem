#include<iostream>
#include<Windows.h>
#include<stdlib.h>
#include<conio.h>
#include<string>

using namespace std;

void addPokemon();
void viewPokemon();

void poke1();
void poke2();
void poke3();
void poke4();
void poke5();
void poke6();


struct Pokemon {
	string name[6];
	string type[6];
	string level[6];
	string gender[6];
	string move1[6];
	string move2[6];
	string move3[6];
	string move4[6];
	string description[6];
	string location[6];
	string height[6];
	string weight[6];


};

Pokemon list;

int main() {
	system("cls");

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 400;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);



	//attrib for color changing
	SetConsoleTextAttribute(color, 11);
	cout << "===============================================\n";
	SetConsoleTextAttribute(color, 11);
	cout << "====";
	SetConsoleTextAttribute(color, 6);
	cout << "     Gotta catch em' all, Pokemon!     ";
	SetConsoleTextAttribute(color, 11);
	cout << "====\n";
	SetConsoleTextAttribute(color, 11);
	cout << "===============================================\n";
	cout << endl;


	int choice;
	SetConsoleTextAttribute(color, 15);
	cout << "[1] Add Pokemon" << endl;
	cout << "[2] View Pokemon" << endl;
	cout << "[0] EXIT" << endl;
	SetConsoleTextAttribute(color, 10);
	cout << "----------\n";
	SetConsoleTextAttribute(color, 15);
	cout << "Please enter your choice: ";
	SetConsoleTextAttribute(color, 11);
	cin >> choice;
	cout << endl;

	switch (choice) {
	case 1:
		addPokemon();
		break;

	case 2:
		viewPokemon();
		break;

	case 0:
		SetConsoleTextAttribute(color, 2);
		cout << "---------- \n";
		SetConsoleTextAttribute(color, 11);
		cout << "Thank you for visiting PokeSys. Please come again. \n";
		system("pause");
		cin.clear();
		break;

	default:
		SetConsoleTextAttribute(color, 12);
		cout << "Invalid input. Please try again. \n";
		system("pause");
		main();
	}



	return 0;
}



void addPokemon() {
	system("cls");

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 400;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);


	//attrib for color changing
	SetConsoleTextAttribute(color, 11);
	cout << "================================================\n";
	SetConsoleTextAttribute(color, 11);
	cout << "====";
	SetConsoleTextAttribute(color, 6);
	cout << "     Please register your 6 Pokemon     ";
	SetConsoleTextAttribute(color, 11);
	cout << "====\n";
	SetConsoleTextAttribute(color, 11);
	cout << "================================================\n";
	cout << endl;
	SetConsoleTextAttribute(color, 10);
	cout << "----------\n";

	for (int i = 0; i < 6; i++) {


		SetConsoleTextAttribute(color, 12);
		cout << "[POKEMON " << i + 1 << "]\n";

		SetConsoleTextAttribute(color, 15);
		cout << "Name: ";

		SetConsoleTextAttribute(color, 11);
		getline(cin >> ws, list.name[i]);

		SetConsoleTextAttribute(color, 15);
		cout << "Type: ";


		SetConsoleTextAttribute(color, 11);
		getline(cin >> ws, list.type[i]);

		SetConsoleTextAttribute(color, 15);
		cout << "Level: ";


		SetConsoleTextAttribute(color, 11);
		getline(cin >> ws, list.level[i]);

		SetConsoleTextAttribute(color, 15);
		cout << "Gender: ";


		SetConsoleTextAttribute(color, 11);
		getline(cin >> ws, list.gender[i]);

		SetConsoleTextAttribute(color, 15);
		cout << "Height: ";


		SetConsoleTextAttribute(color, 11);
		getline(cin >> ws, list.height[i]);

		SetConsoleTextAttribute(color, 15);
		cout << "Weight: ";


		SetConsoleTextAttribute(color, 11);
		getline(cin >> ws, list.weight[i]);

		SetConsoleTextAttribute(color, 15);
		cout << "Move 1: ";


		SetConsoleTextAttribute(color, 11);
		getline(cin >> ws, list.move1[i]);

		SetConsoleTextAttribute(color, 15);
		cout << "Move 2: ";

		SetConsoleTextAttribute(color, 11);
		getline(cin >> ws, list.move2[i]);

		SetConsoleTextAttribute(color, 15);
		cout << "Move 3: ";

		SetConsoleTextAttribute(color, 11);
		getline(cin >> ws, list.move3[i]);

		SetConsoleTextAttribute(color, 15);
		cout << "Move 4: ";

		SetConsoleTextAttribute(color, 11);
		getline(cin >> ws, list.move4[i]);

		SetConsoleTextAttribute(color, 15);
		cout << "Location: ";

		SetConsoleTextAttribute(color, 11);
		getline(cin >> ws, list.location[i]);

		SetConsoleTextAttribute(color, 15);
		cout << "Description: ";


		SetConsoleTextAttribute(color, 11);
		getline(cin >> ws, list.description[i]);


		cout << endl;




	}
	SetConsoleTextAttribute(color, 2);
	cout << "---------- \n";
	SetConsoleTextAttribute(color, 11);
	cout << "Thank you for visiting PokeReg. Please come again. \n";
	system("pause");
	cin.clear();
	main();



}


void viewPokemon() {

	system("cls");

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 400;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);


	int choice1;
	//attrib for color changing
	SetConsoleTextAttribute(color, 11);
	cout << "=================================================\n";
	SetConsoleTextAttribute(color, 11);
	cout << "====";
	SetConsoleTextAttribute(color, 6);
	cout << "           View  your Pokemons           ";
	SetConsoleTextAttribute(color, 11);
	cout << "====\n";
	SetConsoleTextAttribute(color, 11);
	cout << "=================================================\n";
	cout << endl;
	SetConsoleTextAttribute(color, 10);
	cout << "----------\n";


	SetConsoleTextAttribute(color, 15);
	cout << "[1] 1st Pokemon" << endl;
	cout << "[2] 2nd Pokemon" << endl;
	cout << "[3] 3rd Pokemon" << endl;
	cout << "[4] 4th Pokemon" << endl;
	cout << "[5] 5th Pokemon" << endl;
	cout << "[6] 6th Pokemon" << endl;
	cout << "[0] BACK" << endl;
	SetConsoleTextAttribute(color, 10);
	cout << "----------\n";
	SetConsoleTextAttribute(color, 15);
	cout << "Please enter your choice: ";
	SetConsoleTextAttribute(color, 11);
	cin >> choice1;
	cout << endl;

	switch (choice1) {
	case 1:
		poke1();
		break;

	case 2:
		poke2();
		break;

	case 3:
		poke3();
		break;

	case 4:
		poke4();
		break;

	case 5:
		poke5();
		break;


	case 6:
		poke6();
		break;


	case 0:
		SetConsoleTextAttribute(color, 2);
		cout << "---------- \n";
		SetConsoleTextAttribute(color, 11);
		cout << "Thank you for visiting PokeView. Please come again. \n";
		system("pause");
		cin.clear();
		main();
		break;

	default:
		SetConsoleTextAttribute(color, 12);
		cout << "Invalid input. Please try again. \n";
		system("pause");
		viewPokemon();
	}


}

void poke1() {

	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 400;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);



	SetConsoleTextAttribute(color, 11);
	cout << "===============================================================================\n";
	SetConsoleTextAttribute(color, 12);
	cout << "[POKEMON 1] \n";


	SetConsoleTextAttribute(color, 15);
	cout << "Name: ";
	SetConsoleTextAttribute(color, 11);
	cout << " " << list.name[0];


	cout.width(30);
	SetConsoleTextAttribute(color, 15);
	cout << "Type: ";
	SetConsoleTextAttribute(color, 11);
	cout << list.type[0];
	cout << endl; // newline

	SetConsoleTextAttribute(color, 15);
	cout << "Gender: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.gender[0];

	cout.width(30);
	SetConsoleTextAttribute(color, 15);
	cout << "Level: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.level[0];
	cout << endl; //newline

	SetConsoleTextAttribute(color, 15);
	cout << "Height: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.height[0];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 1: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move1[0];
	cout << endl; //newline 

	SetConsoleTextAttribute(color, 15);
	cout << "Weight: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.weight[0];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 2: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move2[0];
	cout << endl; //newline

	SetConsoleTextAttribute(color, 15);
	cout << "Location: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.location[0];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 3: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move3[0];
	cout << endl; // newline

	cout.width(40);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 4: ";
	SetConsoleTextAttribute(color, 11);
	cout << list.move4[0];
	cout << endl; // newline
	cout << endl; //newline
	SetConsoleTextAttribute(color, 15);
	cout << "Description: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.description[0];
	cout << endl; // newline
	SetConsoleTextAttribute(color, 11);
	cout << "===============================================================================\n";



	cout << endl;
	system("pause");
	viewPokemon();

}


void poke2() {
	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 400;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);



	SetConsoleTextAttribute(color, 11);
	cout << "===============================================================================\n";
	SetConsoleTextAttribute(color, 12);
	cout << "[POKEMON 2] \n";


	SetConsoleTextAttribute(color, 15);
	cout << "Name: ";
	SetConsoleTextAttribute(color, 11);
	cout << " " << list.name[1];


	cout.width(30);
	SetConsoleTextAttribute(color, 15);
	cout << "Type: ";
	SetConsoleTextAttribute(color, 11);
	cout << list.type[1];
	cout << endl; // newline

	SetConsoleTextAttribute(color, 15);
	cout << "Gender: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.gender[1];

	cout.width(30);
	SetConsoleTextAttribute(color, 15);
	cout << "Level: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.level[1];
	cout << endl; //newline

	SetConsoleTextAttribute(color, 15);
	cout << "Height: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.height[1];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 1: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move1[1];
	cout << endl; //newline 

	SetConsoleTextAttribute(color, 15);
	cout << "Weight: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.weight[1];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 2: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move2[1];
	cout << endl; //newline

	SetConsoleTextAttribute(color, 15);
	cout << "Location: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.location[1];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 3: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move3[1];
	cout << endl; // newline

	cout.width(40);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 4: ";
	SetConsoleTextAttribute(color, 11);
	cout << list.move4[1];
	cout << endl; // newline
	cout << endl; //newline
	SetConsoleTextAttribute(color, 15);
	cout << "Description: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.description[1];
	cout << endl; // newline
	SetConsoleTextAttribute(color, 11);
	cout << "===============================================================================\n";



	cout << endl;
	system("pause");
	viewPokemon();
}


void poke3() {
	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 400;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);



	SetConsoleTextAttribute(color, 11);
	cout << "===============================================================================\n";
	SetConsoleTextAttribute(color, 12);
	cout << "[POKEMON 3] \n";


	SetConsoleTextAttribute(color, 15);
	cout << "Name: ";
	SetConsoleTextAttribute(color, 11);
	cout << " " << list.name[2];


	cout.width(30);
	SetConsoleTextAttribute(color, 15);
	cout << "Type: ";
	SetConsoleTextAttribute(color, 11);
	cout << list.type[2];
	cout << endl; // newline

	SetConsoleTextAttribute(color, 15);
	cout << "Gender: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.gender[2];

	cout.width(30);
	SetConsoleTextAttribute(color, 15);
	cout << "Level: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.level[2];
	cout << endl; //newline

	SetConsoleTextAttribute(color, 15);
	cout << "Height: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.height[2];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 1: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move1[2];
	cout << endl; //newline 

	SetConsoleTextAttribute(color, 15);
	cout << "Weight: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.weight[2];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 2: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move2[2];
	cout << endl; //newline

	SetConsoleTextAttribute(color, 15);
	cout << "Location: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.location[2];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 3: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move3[2];
	cout << endl; // newline

	cout.width(40);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 4: ";
	SetConsoleTextAttribute(color, 11);
	cout << list.move4[2];
	cout << endl; // newline
	cout << endl; //newline
	SetConsoleTextAttribute(color, 15);
	cout << "Description: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.description[2];
	cout << endl; // newline
	SetConsoleTextAttribute(color, 11);
	cout << "===============================================================================\n";



	cout << endl;
	system("pause");
	viewPokemon();
}

void poke4() {
	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 400;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);



	SetConsoleTextAttribute(color, 11);
	cout << "===============================================================================\n";
	SetConsoleTextAttribute(color, 12);
	cout << "[POKEMON 4] \n";


	SetConsoleTextAttribute(color, 15);
	cout << "Name: ";
	SetConsoleTextAttribute(color, 11);
	cout << " " << list.name[3];


	cout.width(30);
	SetConsoleTextAttribute(color, 15);
	cout << "Type: ";
	SetConsoleTextAttribute(color, 11);
	cout << list.type[3];
	cout << endl; // newline

	SetConsoleTextAttribute(color, 15);
	cout << "Gender: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.gender[3];

	cout.width(30);
	SetConsoleTextAttribute(color, 15);
	cout << "Level: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.level[3];
	cout << endl; //newline

	SetConsoleTextAttribute(color, 15);
	cout << "Height: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.height[3];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 1: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move1[3];
	cout << endl; //newline 

	SetConsoleTextAttribute(color, 15);
	cout << "Weight: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.weight[3];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 2: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move2[3];
	cout << endl; //newline

	SetConsoleTextAttribute(color, 15);
	cout << "Location: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.location[3];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 3: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move3[3];
	cout << endl; // newline

	cout.width(40);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 4: ";
	SetConsoleTextAttribute(color, 11);
	cout << list.move4[3];
	cout << endl; // newline
	cout << endl; //newline
	SetConsoleTextAttribute(color, 15);
	cout << "Description: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.description[3];
	cout << endl; // newline
	SetConsoleTextAttribute(color, 11);
	cout << "===============================================================================\n";



	cout << endl;
	system("pause");
	viewPokemon();
}

void poke5() {
	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 400;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);



	SetConsoleTextAttribute(color, 11);
	cout << "===============================================================================\n";
	SetConsoleTextAttribute(color, 12);
	cout << "[POKEMON 5] \n";


	SetConsoleTextAttribute(color, 15);
	cout << "Name: ";
	SetConsoleTextAttribute(color, 11);
	cout << " " << list.name[4];


	cout.width(30);
	SetConsoleTextAttribute(color, 15);
	cout << "Type: ";
	SetConsoleTextAttribute(color, 11);
	cout << list.type[4];
	cout << endl; // newline

	SetConsoleTextAttribute(color, 15);
	cout << "Gender: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.gender[4];

	cout.width(30);
	SetConsoleTextAttribute(color, 15);
	cout << "Level: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.level[4];
	cout << endl; //newline

	SetConsoleTextAttribute(color, 15);
	cout << "Height: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.height[4];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 1: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move1[4];
	cout << endl; //newline 

	SetConsoleTextAttribute(color, 15);
	cout << "Weight: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.weight[4];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 2: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move2[4];
	cout << endl; //newline

	SetConsoleTextAttribute(color, 15);
	cout << "Location: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.location[4];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 3: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move3[4];
	cout << endl; // newline

	cout.width(40);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 4: ";
	SetConsoleTextAttribute(color, 11);
	cout << list.move4[4];
	cout << endl; // newline
	cout << endl; //newline
	SetConsoleTextAttribute(color, 15);
	cout << "Description: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.description[4];
	cout << endl; // newline
	SetConsoleTextAttribute(color, 11);
	cout << "===============================================================================\n";



	cout << endl;
	system("pause");
	viewPokemon();
}

void poke6() {
	// font-size and font-color
	static CONSOLE_FONT_INFOEX fontex;
	fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	HANDLE h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
	GetCurrentConsoleFontEx(h0ut, 0, &fontex);
	fontex.FontWeight = 400;
	fontex.dwFontSize.X = 18;
	fontex.dwFontSize.Y = 18;
	SetCurrentConsoleFontEx(h0ut, NULL, &fontex);
	HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);



	SetConsoleTextAttribute(color, 11);
	cout << "===============================================================================\n";
	SetConsoleTextAttribute(color, 12);
	cout << "[POKEMON 6] \n";


	SetConsoleTextAttribute(color, 15);
	cout << "Name: ";
	SetConsoleTextAttribute(color, 11);
	cout << " " << list.name[4];


	cout.width(30);
	SetConsoleTextAttribute(color, 15);
	cout << "Type: ";
	SetConsoleTextAttribute(color, 11);
	cout << list.type[5];
	cout << endl; // newline

	SetConsoleTextAttribute(color, 15);
	cout << "Gender: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.gender[5];

	cout.width(30);
	SetConsoleTextAttribute(color, 15);
	cout << "Level: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.level[5];
	cout << endl; //newline

	SetConsoleTextAttribute(color, 15);
	cout << "Height: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.height[5];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 1: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move1[5];
	cout << endl; //newline 

	SetConsoleTextAttribute(color, 15);
	cout << "Weight: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.weight[5];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 2: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move2[5];
	cout << endl; //newline

	SetConsoleTextAttribute(color, 15);
	cout << "Location: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.location[5];

	cout.width(30);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 3: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.move3[5];
	cout << endl; // newline

	cout.width(40);

	SetConsoleTextAttribute(color, 15);
	cout << "Move 4: ";
	SetConsoleTextAttribute(color, 11);
	cout << list.move4[5];
	cout << endl; // newline
	cout << endl; //newline
	SetConsoleTextAttribute(color, 15);
	cout << "Description: ";

	SetConsoleTextAttribute(color, 11);
	cout << list.description[5];
	cout << endl; // newline
	SetConsoleTextAttribute(color, 11);
	cout << "===============================================================================\n";



	cout << endl;
	system("pause");
	viewPokemon();

}