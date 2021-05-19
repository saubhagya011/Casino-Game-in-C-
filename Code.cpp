#include <bits/stdc++.h>
using namespace std;
typedef class casino
{
public:
    char cnfm;
    int n;
    float amount, balance;
    float result;
    int random;
    string username;
    double invested();
    void input();
    double bal();
    void generator();
    // void res();
    void disclaimer();
    void game();
    void display();
} cas;
void cas::input()
{
    cout << "Enter the username of the player" << endl;
    cin >> username;
    cout << "Enter the amount that you're capable of putting in" << endl;
    cin >> amount;
}
double cas::invested()
{
    cout << "Amount invested=";
    return amount;
}
void cas::game()
{
    int random;
    float t = amount;
    while (t > 0)
    {
        cout << "Enter the number that you wish to guess and the range of the number should be between 00 and 100 both numbers included " << endl;
        cin >> n;
        srand(n + 10);
        random = rand() % 100;
        if (n == random)
        {
            t += (t * 0.1);
            cout << "Entered number matches and amount is increased by 10%" << endl;
        }
        else if (n != random)
        {
            t -= (t * 0.2);
            cout << "Numbers don't match amount is reduced by 20%" << endl;
        }
        cout << "Number generated=" << random << "\n"
             << "Number entered=" << n << endl;
        balance = t;
        cout << "Balance=" << t << endl;
        // bal();
    }
}
double cas::bal()
{
    return balance;
}
void cas::disclaimer()
{
    cout << "Please read the following disclaimer before proceeding" << endl;
    cout << "Please note, during your use of this game, that  gambling is an entertainment vehicle, and that it carries with it a certain degree of financial risk.\n Players should be aware of this risk, and govern themselves accordingly.\n All users of the application should exercise responsibility when playing in virtual casinos;\n The creator of the game has undertaken to inform all those interested in online gaming about the dangers of excess that could potentially result from such an activity.\n There is nothing contained herein that constitutes a guarantee of winning, nor is there an intention to induce anyone into violating any local, state or national laws.\n Recognizing that the laws and regulations involving gambling are different everywhere, readers are advised to check with the laws that exist within their own jurisdiction to ascertain the legality of the activities which are covered." << endl;
    cout << "If the guess matches the number generated then amount is incremented by 10% else amount is reduced by 20% of the value" << endl;
    cout << "Please press Y if you have read the disclaimer and wish to proceed\nPlease press N if you do not agree with the TnC and wish to abort the game " << endl;
    cin >> cnfm;
}
void cas::display()
{
    cout << "Username-->" << username << endl;
    // cout << "Amount invested=" << amount << endl;
    invested();
    cout << "Consent granted for the game" << endl;
}
void cas::generator()
{
}

int main()
{
    casino c;
    c.disclaimer();
    if (c.cnfm == 'Y')
    {
        c.input();
        c.display();
        c.game();
    }
    return 0;
}
