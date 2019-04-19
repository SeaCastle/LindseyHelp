#include <iostream>
#include <string>
#include <tuple>

class HeartRates
{
public:
	struct dateOfBirth
	{
		int day;
		int month;
		int year;
	};

	HeartRates(std::string firstName, std::string lastName, int day, int month, int year)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		dob.day = day;
		dob.month = month;
		dob.year = year;

		maxHeartRate = 0;
		targetHeartRate = 0;
		age = 0;
	}

	// -----------
	// Getters:
	// -----------
	std::string getFirstName()
	{
		return firstName;
	}

	std::string getLastName()
	{
		return lastName;
	}

	dateOfBirth getDOB()
	{
		return dob;
	}

	// -----------
	// Setters:
	// -----------
	void setFirstName(std::string fName)
	{
		firstName = fName;
	}

	void setLastName(std::string lName)
	{
		lastName = lName;
	}

	void setDOB(int day, int month, int year)
	{
		dob.day = day;
		dob.month = month;
		dob.year = year;
	}

	// ------------------------
	// Other member functions
	// ------------------------
	int getAge()
	{
		int day, month, year;
		std::cout << "Please enter the current day, month, year in numbers followed by spaces (FOMART: MM DD YYYY)" << std::endl;
		std::cin >> month >> day >> year;

		age = year - dob.year;

		// If they have already had their birthday this year, or today is their birthday
		if (month > dob.month || (month == dob.month && day >= dob.day))
		{
			age += 1;
		}

		return age;
	}

	// This function MUST BE CALLED AFTER getAge() has been called. If not, we do not know
	// the persons age and therefor we cannot calculate their max heart rate
	int getMaximumHeartRate()
	{
		maxHeartRate = 
		return 0;
	}

	int getTargetHeartRate()
	{
		return 0;
	}

private:
	std::string firstName;
	std::string lastName;
	dateOfBirth dob;
	int maxHeartRate;
	std::tuple<int, int> targetHeartRate;
	int age;
};

int main()
{

	return 0;
}