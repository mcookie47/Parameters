#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct video_games {
	string name;
	string title;
	int rating;
} mine, yours;

void print_video_game(video_games game);

int main()
{
	string mystr;
	mine.name = "Matt";
	mine.title = "Ghost of Tsushima";
	mine.rating = 5;

	cout << "Please enter your name: ";
	cin >> yours.name;
	cout << "Game: ";
	cin >> yours.title;
	cout << "Rating: ";
	cin >> yours.rating;

	print_video_game(mine);
	
	print_video_game(yours);

	system("pause");
	return 0;
}

void print_video_game(video_games game) {
	cout << game.name << "'s rating for " << game.title << " is a " << game.rating <<"/5.\n";
}