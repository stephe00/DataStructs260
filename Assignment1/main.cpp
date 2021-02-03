// driver file for bag.cpp
// stephen oium 
// main.cpp
// 2.2.2021

int main(){
    char loop = 'n';
    cout << "\nThis bag can hold up to 1000 marbles!\n";

    do {
        questionOne();
        minus();
        displayBag();
        cout << "Would you like to continue (y or n): ";
        cin >> loop;
    } while (loop == 'y');

    cout << "\n";
    return 0;
}
