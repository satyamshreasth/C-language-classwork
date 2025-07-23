#include <stdio.h>

// Global variables
char board[3][3];
char currentPlayer = 'X';

// Function declarations
void initializeBoard();
void displayBoard();
int checkWin();
int isDraw();
void makeMove();

int main() {
    int winner = 0;

    initializeBoard();

    while (1) {
        displayBoard();
        makeMove();

        winner = checkWin();
        if (winner == 1) {
            displayBoard();
            printf("Player %c wins!\n", currentPlayer);
            break;
        } else if (isDraw()) {
            displayBoard();
            printf("It's a draw!\n");
            break;
        }

        // Switch player
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}

void initializeBoard() {
    int count = 1;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = '1' + (count++ - 1); // Fill with '1' to '9'
}

void displayBoard() {
    printf("\n");
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

void makeMove() {
    int choice;
    int row, col;
    int valid = 0;

    while (!valid) {
        printf("Player %c, enter a number (1-9): ", currentPlayer);
        scanf("%d", &choice);

        if (choice < 1 || choice > 9) {
            printf("Invalid input! Try again.\n");
            continue;
        }

        row = (choice - 1) / 3;
        col = (choice - 1) % 3;

        if (board[row][col] == 'X' || board[row][col] == 'O') {
            printf("Cell already taken! Try again.\n");
        } else {
            board[row][col] = currentPlayer;
            valid = 1;
        }
    }
}

int checkWin() {
    // Rows, Columns, and Diagonals
    for (int i = 0; i < 3; i++)
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) || 
            (board[0][i] == board[1][i] && board[1][i] == board[2][i]))
            return 1;

    if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
        (board[0][2] == board[1][1] && board[1][1] == board[2][0]))
        return 1;

    return 0;
}

int isDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return 0;
    return 1;
}
