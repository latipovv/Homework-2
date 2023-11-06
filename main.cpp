//Author: Akbar Latipov
//Date: 06//11/2023

#include <iostream>

#include <iostream>

using namespace std;

// Problem 1
void problem1() {
    int num1, num2;
    float average1, average2;
    float arr[2];

    cout << "-- Problem 1 --" << endl;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    average1 = (num1 + num2) / 2.0;
    average2 = (num1 + num2) / 2.0;

    arr[0] = average1;
    arr[1] = average2;

    cout << "The result of the first average is " << arr[0] << endl;
    cout << "The result of the second average is " << arr[1] << endl;
}

// Problem 2
void problem2() {
    float base, height;
    float answer;

    cout << "-- Problem 2 --" << endl;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    answer = (base * height) / 2.0;

    cout << "The area of the triangle is " << answer << endl;
}

// Problem 3
void problem3() {
    float tempC;
    float answerF;

    cout << "-- Problem 3 --" << endl;
    cout << "Enter the temperature in Celsius: ";
    cin >> tempC;

    answerF = (tempC * 9 / 5) + 32;

    cout << "The temperature in Fahrenheit is " << answerF << endl;
}

// Problem 4
void problem4() {
    int N;
    int groupSize = 2;
    int lastGroupSize;

    cout << "-- Problem 4 --" << endl;
    cout << "Enter the number of students: ";
    cin >> N;

    lastGroupSize = N % groupSize;

    cout << "The number of free computers in the last group is " << lastGroupSize;
}

// Problem 5
void problem5() {
    int arr[5];

    cout << "-- Problem 5 --" << endl;

    arr[0] = sizeof(bool);
    arr[1] = sizeof(char);
    arr[2] = sizeof(int);
    arr[3] = sizeof(float);
    arr[4] = sizeof(double);

    cout << "Size of bool: " << arr[0] << endl;
    cout << "Size of char: " << arr[1] << endl;
    cout << "Size of int: " << arr[2] << endl;
    cout << "Size of float: " << arr[3] << endl;
    cout << "Size of double: " << arr[4] << endl;
}

int main() {
    problem1();
    cout << endl;

    problem2();
    cout << endl;

    problem3();
    cout << endl;

    problem4();
    cout << endl;

    problem5();

    return 0;
}