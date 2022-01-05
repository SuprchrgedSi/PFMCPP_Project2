#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of the 6 major primitive types available in C++  here:
 int
 unsigned int (not sure if this counts, but it was in your video)
 char
 bool
 float
 double
 void
  
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) Declare 10 free functions
    each declaration should have a random number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.

4) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
5) pass each of your function parameters to the ignoreUnused function like you did in b)
6) if your function returns something other than void, add 'return { };' at the end of it.
7) provide default values for an arbitrary number of parameters in the function parameter list.

8) consult the coding style guide found in the Readme.MD and adjust the formatting of your 10 functions.  At this point, you might have something that looks like this:
    float someFunc2(bool yes, int bar=2) { ignoreUnused(yes, bar ); return { }; }
    This does not conform with the coding standard for this course (check the Readme.MD) and needs to be corrected
    
9) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
10) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a variable named "number", that uses the primitive type 'int', and the variable's initial value is '2'
    int numPlayers = 10;
    int pointsPerShot = 3;
    int employeeCount = 3000;

    char studentGrade = 'B';
    char randomLetter = 'Z';
    char smallNumber = '3';
    
    float averageGPA = 3.23f;
    float vehicleMPG = 31.5f;
    float fortyYardDashTime = 4.89f;

    bool coinIsHeads = false;
    bool testComplete = true;
    bool failedTest = false;

    double circleArea = 6.2814;
    double signalCDF = 0.7834;
    double amplifierGain = 3.7645;

    
    ignoreUnused(number, numPlayers, pointsPerShot, employeeCount, studentGrade,
    randomLetter, smallNumber, averageGPA, vehicleMPG, fortyYardDashTime,
    coinIsHeads, testComplete, failedTest, circleArea, signalCDF, amplifierGain); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 note: this example shows the result after completing steps 3-8
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
float calcCircleArea(float radius = 0.0f)
{
    ignoreUnused(radius);
    return {};
}
/*
 2)
 */
void createPerson(int Age, float Height, float Weight, char Gender = 'M')
{
    ignoreUnused(Age, Height, Weight, Gender);
}
/*
 3)
 */
int generateRandomInt()
{
    return {};
}
/*
 4)
 */
double calcGPA(float avgTestScore = 0.0f, float testWeight = 0.0f, 
               float avgHomeworkScore = 0.0f)
{
    ignoreUnused(avgTestScore, testWeight, avgHomeworkScore);
    return {};
}
/*
 5)
 */
bool charMatch(char char1, char char2)
{
    ignoreUnused(char1, char2);
    return {};
}
/*
 6)
 */
int charToInt(char inputChar)
{
    ignoreUnused(inputChar);
    return {};
}
/*
 7)
 */
bool checkForEquality(int num1 = 0, int num2 = 0)
{
    ignoreUnused(num1, num2);
    return {};
}
/*
 8)
 */
double calculatePlayerRating(double pointsPerGame, double reboundsPerGame,
                             double assistsPerGame)
{
    ignoreUnused(pointsPerGame, reboundsPerGame, assistsPerGame);
    return {};
}
/*
 9)
 */
void addChar(int number, char numToAdd = '0')
{
    ignoreUnused(number, numToAdd);
}
/*
 10)
 */
int addOctave(int pitchNum = 60)
{
    ignoreUnused(pitchNum);
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto circleArea = calcCircleArea(2.5f);
    //2)
    createPerson(35,68.4f, 180.54f);
    //3)
    auto randInt = generateRandomInt();
    //4)
    auto studentGPA = calcGPA(88.3f, 0.65f, 94.2f)
    //5)
    auto matched = charMatch('1', '2');
    //6)
    auto castChar = charToInt('3');
    //7)
    auto isEqual = checkForEquality(7,6);
    //8)
    auto playerRating = calculatePlayerRating(15.6, 5.6, 4.8);
    //9)
    addChar(16,'6');
    //10)
    auto newPitch = addOctave(52);
    
    ignoreUnused(carRented);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
