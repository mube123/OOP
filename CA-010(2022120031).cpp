 #include<iostream>
 #include <string> 
 using namespace std; 
 
 const double DEFAULT_SCORE = 0.0; 
 
 
	
 class StudentTestScores 
 { 
 private: 
 string studentName; // The student's name 
 double *testScores; // Points to array of test scores 
 int numTestScores; // Number of test scores f

// Private member function to create an array of test scores. 
void createTestScoresArray(int size) 
{ 
	numTestScores = size; 
	testScores = new double[size]; 
	for (int i = 0; i < size; i++) 
	testScores[i] = DEFAULT_SCORE;
}
public: 
// Constructor 
StudentTestScores(string name, int numScores) 
{ 
	studentName = name; 
	createTestScoresArray(numScores); 
} 

//Copy Constructor
StudentTestScores(const StudentTestScores& obj)
{
	studentName=obj.studentName;
	numTestScores=obj.numTestScores;
	testScores=new double[numTestScores];
	for (int i = 0; i < numTestScores; i++) 
	testScores[i] = obj.testScores[i];
	
}

void operator=(const StudentTestScores& obj)
{
	delete[] testScores;
	studentName=obj.studentName;
	numTestScores=obj.numTestScores;
	testScores=new double[numTestScores];
	for (int i = 0; i < numTestScores; i++) 
	testScores[i] = obj.testScores[i];
}

// Destructor 
~StudentTestScores() 
{ 
	delete [] testScores; 
} 

// Set TestScore function sets a specific test score's value. 
void setTestScore(double score, int index) 
{ 
	testScores[index] = score;
} 

// Set the student's name. 
void setStudentName(string name) 
{ 
	studentName = name; 
} 

// Get the student's name. 
string getStudentName() const 
{ 
	return studentName; 
} 

// Get the number of test scores. 
int getNumTestScores() const 
{ 
	return numTestScores; 
} 

// Get a specific test score. 
double getTestScore(int index) const 
{ 
	return testScores[index]; 
} 


}; 

// Function prototype
void displayStudent(StudentTestScores);

int main()
{
	
	
	
	StudentTestScores obj1("Kelly Thorton", 3);
	obj1.setTestScore(100.0, 0);
	obj1.setTestScore(95.0, 1);
	obj1.setTestScore(80, 2);
	
	cout<<obj1.getStudentName()<<endl;
	cout<<"Number of tests: "<<obj1.getNumTestScores()<<endl;
	cout<<obj1.getTestScore(0)<<endl;
	cout<<obj1.getTestScore(1)<<endl;
	cout<<obj1.getTestScore(2)<<endl;
	
	// Create another StudentTestScore object with default test scores.
	StudentTestScores obj2("Jimmy Griffin", 5);
	obj2.setTestScore(89.0, 0);
	obj2.setTestScore(76.5, 1);
	obj2.setTestScore(68.0, 2);
	obj2.setTestScore(99.0, 3);
	obj2.setTestScore(70.0, 4);
	
	cout<<obj2.getStudentName()<<endl;
	cout<<"Number of tests: "<<obj2.getNumTestScores()<<endl;
	cout<<obj2.getTestScore(0)<<endl;
	cout<<obj2.getTestScore(1)<<endl;
	cout<<obj2.getTestScore(2)<<endl;
	cout<<obj2.getTestScore(3)<<endl;
	cout<<obj2.getTestScore(4)<<endl;
	
	// Assign the obj1 object to obj2
	obj2 = obj1;
	
	
	// Display both objects. They should contain the same data.
	cout<<"After equailizing the objects:"<<endl;
	cout<<"Object 1:"<<endl;
	displayStudent(obj1);
	cout<<"Object 2:"<<endl;
	displayStudent(obj2);	
	
		
	
	system("pause");
}

// The displayStudent function accepts a StudentTestScores object's data.
void displayStudent(StudentTestScores s)
{
	cout << "Name: " << s.getStudentName() << endl;
	cout << "Test Scores: ";
	for (int i = 0; i < s.getNumTestScores(); i++)
	cout << s.getTestScore(i) << " ";
	cout << endl;
}

