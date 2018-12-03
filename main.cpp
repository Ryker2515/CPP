// This header file is used to access the input output methods.
#include <iostream>

// This header file is used to access the srand method.
#include <ctime>

// Using std namespace to access cout, cin, endl, etc.
using namespace std;


// Define main method this is an entry point of program
// execution starts from here.
int main()
{
    srand((unsigned)time(0));
    int random_integer1; // This variable is used to store the 1st random number.
    int random_integer2; // This variable is used to store the 2nd random number.
    int result; // This variable is used to store the result of those random numbers.
    int userAnswer; // This variableis used to store the user answer for each addition question.
    int noOfQuestions; // This variable is used to store the number of question user wants.
    int countDisplayedQuestion = 0; // This variable is used to count the number of displayed questions.
    int correctAnswer = 0; // This variable is used to count the correct answer.

    // Display the string value to user.
    cout<< endl << "Welcome to maths quize test..." << endl;

    // Display the string value to user.
    cout<<"Please enter a negative number if you want to exit" << endl;

    // Display the string value to user.
    cout<<"Please enter the number of question you want..?";

    // Get the input from user for number of questions.
    cin>> noOfQuestions;

        // This loop is used to generate two random numbers who addition will
        // between 0 to 100 only.
        for(int index=0; index<noOfQuestions; index++)
    {
        // Generate random number from 0 to 100 which is 1st number.
        random_integer1 = (rand()%100)+1;

        // Generate random number from 0 to (100 - 1st random number which is just generated above).
        // and this will be 2nd random number.
        random_integer2 = (rand()% (100 - random_integer1) + 1);

        // Get the addition result.
        result = random_integer1 + random_integer2;

        countDisplayedQuestion = countDisplayedQuestion + 1;

        // Display the question to user.
    cout << endl << random_integer1 << " + " << random_integer2 << " = ?" << endl;
    cin>> userAnswer; // Get the answer from user.

    if (userAnswer < 0) // Check user enter a negative number.
    {
        cout<< "You got " << correctAnswer <<" correct answers out of " << countDisplayedQuestion <<endl; // Display the string value to user.
        cout<<"Quiz Ends here..."; // Then quiz ends here.
        return 0;
    }
    if (userAnswer != result) // Check if user enter incorrect answer.
        cout<<"Worng Answer.. Correct Answer is : " << result << endl; // Display correct answer to user.
    else
    {
        cout<<"Correct Answer" << endl; // Display the string to user.
        correctAnswer = correctAnswer + 1;
    }
    }
    cout<< "You got " << correctAnswer <<" correct answers out of " << countDisplayedQuestion <<endl; // Display the string value to user.
    cout<<"Quiz Ends here..."; // Display the string value to user.
    return 0;
}
