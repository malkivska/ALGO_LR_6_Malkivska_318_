#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Завдання 1: Підрахунок кількості різних елементів у масиві
void task1() {
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Сортуємо масив для знаходження унікальних елементів
    sort(arr.begin(), arr.end());
    int uniqueCount = 1; // Оскільки масив не порожній, є хоча б один унікальний елемент

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            uniqueCount++;
        }
    }

    cout << "Кількість різних елементів в масиві: " << uniqueCount << endl;
}

// Завдання 2: Перестановка елементів між індексами K та L
void task2() {
    int n, k, l;
    cout << "Введіть розмір масиву: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Введіть індекси K та L (1 ≤ K < L ≤ N): ";
    cin >> k >> l;

    // Переводимо індекси в масив з нульовим індексацією
    k--; l--;

    // Перестановка елементів між індексами K та L в зворотному порядку
    while (k < l) {
        swap(arr[k], arr[l]);
        k++;
        l--;
    }

    // Виведення зміненого масиву
    cout << "Змінений масив:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Завдання 3: Організація меню для багаторазового вибору завдань
void menu() {
    int choice;
    do {
        cout << "\nМеню:\n";
        cout << "1. Завдання 1: Підрахунок різних елементів масиву\n";
        cout << "2. Завдання 2: Перестановка елементів масиву\n";
        cout << "0. Вихід\n";
        cout << "Ваш вибір: ";
        cin >> choice;

        switch (choice) {
            case 1:
                task1();
                break;
            case 2:
                task2();
                break;
            case 0:
                cout << "Вихід з програми.\n";
                break;
            default:
                cout << "Некоректний вибір. Спробуйте ще раз.\n";
        }
    } while (choice != 0);
}

int main() {
    menu(); // Запуск меню
    return 0;
}
