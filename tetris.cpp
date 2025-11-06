#include <iostream>
#include <ctime>
#include <string>
//#include <chrono>
//#include <thread>
#include <windows.h>

using namespace std;

const int SHAPES[7][4][2] = {
    // T
    {{ 0, 0},{-1, 0},{ 1, 0},{ 0,-1}},
    // I
    {{ 0,-1},{ 0, 0},{ 0, 1},{ 0, 2}},
    // S
    {{ 0, 0},{ 1, 0},{ 0,-1},{-1,-1}},
    // Z
    {{ 0, 0},{-1, 0},{ 0,-1},{ 1,-1}},
    // O
    {{ 0, 0},{ 1, 0},{ 0, 1},{ 1, 1}},
    // L
    {{ 0, 0},{-1, 0},{ 1, 0},{ 1,-1}},
    // J
    {{ 0, 0},{-1, 0},{ 1, 0},{-1,-1}}
};

void showScreen(string grid[22][10]){
    
    for(int i = 2; i < 22; i++){
        cout << "\n";
        for(int j = 0; j < 10; j++){
            cout << grid[i][j];
        }
    }

}

void placeShape(string grid[22][10], int shapeIndex, int px, int py){
    for(int i = 0; i < 4; i++){
        int dx = SHAPES[shapeIndex][i][0];
        int dy = SHAPES[shapeIndex][i][1];

        grid[py + dy][px + dx] = "[+]";
    }
}

bool canGoDown(string grid[22][10], int SHAPES[7][4][2]){
    
}

int main(){

    string grid[22][10] = {
        {" | ", "...", "...", "...", "...", "...", "...", "...", "...", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", "   ", " | "},
        {" | ", "...", "...", "...", "...", "...", "...", "...", "...", " | "}
    };


    // "..."
    // "[+]"
    // "   "

    bool running = false;
    char startChar;
    char endChar;

    srand(time(0));

    while(!running){

        cout << "Press 'P' to Play!: ";
        cin >> startChar;
        if(startChar == 'P' || startChar == 'p'){
            running = true;
            int px = 4, py = 2;
            int shapeIndex = (rand() % 7);

            do{
                system("cls");
                placeShape(grid, shapeIndex, px, py);
                showScreen(grid);
                Sleep(250);
                if(py > 20){
                    break;
                }else{
                    py++;
                }

            }while(running);
        }
    }

    return 0;
}