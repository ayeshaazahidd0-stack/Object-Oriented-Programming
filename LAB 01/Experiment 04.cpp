#include <iostream>
#include <string>

using namespace std;

struct MovieData {
    string title;
    string director;
    int year_released;
    int running_time;
};

void display(MovieData movie) {
    cout << "\nMovie Title         : " << movie.title << endl;
    cout << "Movie Director      : " << movie.director << endl;
    cout << "Movie Year Released : " << movie.year_released << endl;
    cout << "Running Time (Mins) : " << movie.running_time << endl;
    cout << "---------------------------------------------------------" << endl;
}

int main() {
    MovieData M1, M2;

    cout << "--------------- Movie Input ---------------" << endl;


    cout << "Enter Movie 1 Name: ";
    getline(cin, M1.title);

    cout << "Enter Movie 1 Director: ";
    getline(cin, M1.director);

    cout << "Enter Year Released: ";
    cin >> M1.year_released;

    cout << "Enter Running Time (Mins): ";
    cin >> M1.running_time;

   
    cin.ignore();

    cout << "\n-------------------------------------------" << endl;

 
    cout << "Enter Movie 2 Name: ";
    getline(cin, M2.title);

    cout << "Enter Movie 2 Director: ";
    getline(cin, M2.director);

    cout << "Enter Year Released: ";
    cin >> M2.year_released;

    cout << "Enter Running Time (Mins): ";
    cin >> M2.running_time;


    cout << "\n\n--------------- Displaying Movies ---------------" << endl;
    display(M1);
    display(M2);

    return 0;
}