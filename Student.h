class Student {
	// private section
private:
	//    int studentId
	int studentID;
	//    name <- 20 charcters
	char name[20];

	// public section
public:
	//    assignDetails() method declaration
	void assignDetails(int id, const char s_name[]);
	//    display() method declaration
	void display();
};