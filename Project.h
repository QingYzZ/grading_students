#include <string>
#include <list>
#include "GRADING_STUDENTS_MACROS.h"

using namespace std;

class Project {
	public:
	int modifyTestsNumber(int desiredNumTests);
	int getNumTests() { return numTests;} /* get the number of tests */
	int checkGFA(); /* check if  */
	int getScore(bool ifBest); /* get the total score of current tests scores */

	private:
	string name;
	int numTests; /* number of tests a student should at least have */

	list<int> currentScores; /* keeps track of current test scores */
	list<int> currentBestScores; /* keeps track of the test scores that have the highest total */
};