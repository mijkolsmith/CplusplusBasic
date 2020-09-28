class Student {
private:
	StudentType studentType;

public:
	Student(StudentType _studentType)
	{
		studentType = _studentType;
	}

	StudentType GetStudentType()
	{
		return studentType;
	}
};