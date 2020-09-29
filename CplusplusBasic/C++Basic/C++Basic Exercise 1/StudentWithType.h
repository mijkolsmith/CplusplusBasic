class StudentWithType 
{
public:
	StudentWithType(StudentType _studentType)
	{
		studentType = _studentType;
	}

	StudentType getStudentType()
	{
		return studentType;
	}
private:
	StudentType studentType;
};