 #include<iostream>
 #include <string> 
 using namespace std; 
 
 const double DEFAULT_SCORE = 0.0; 
 class StudentTestScores 
 { 
 private: 
 string studentName; // The student's name 
 double *testScores; // Points to array of test scores 
 int numTestScores; // Number of test scores 

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

int main()
{
	StudentTestScores student1 ("Rida", 5); 
	student1.setTestScore(100.0, 3);
	cout<<student1.getTestScore(3)<<endl;
	//student1.setTestScore(95.0, 1);
	//student1.setTestScore(80, 2);
	
	StudentTestScores student2 = student1;
	cout<<student2.getTestScore(3)<<endl;
	
	
	//student2.setStudentName("Mubeen");
	student2.setTestScore(79.7,3);
	//student2.setTestScore(96.7,1);
	//student2.setTestScore(84.5,2);
	
	//cout<<student2.getStudentName()<<endl;
	cout<<student2.getTestScore(3)<<endl;
	cout<<student1.getTestScore(3)<<endl;
	//StudentTestScores* ptr=new StudentTestScores;
	//cout<<student2.getTestScore(0)<<endl;
	
	
	cout<<student2.getNumTestScores()<<endl;
}

