//
//  main.cpp
//  C++ Playground
//
//  Created by Spencer Peterson on 1/17/19.
//  Copyright © 2019 StickmanMafia. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

class HeartRates
{
public:
    HeartRates(string firstName, string lastName, int dobMonth, int dobDay, int dobYear, int curMonth, int curDay, int curYear)
    {
        this->firstName = firstName; this->lastName = lastName; this->dobMonth = dobMonth; this->dobDay = dobDay; this->dobYear = dobYear; this->curMonth = curMonth; this->curDay = curDay; this->curYear = curYear;
    }
    
    string getFirstName()
    {
        return firstName;
    }
    
    string getLastName()
    {
        return lastName;
    }
    
    int getDobMonth()
    {
        return dobMonth;
    }
    
    int getDobDay()
    {
        return dobDay;
    }
    
    int getDobYear()
    {
        return dobYear;
    }
    
    int getCurMonth()
    {
        return curMonth;
    }
    
    int getCurDay()
    {
        return curDay;
    }
    
    int getCurYear()
    {
        return curYear;
    }
    
    int getUserAge()
    {
        int userAge = 0;
        
        if (dobMonth < 5)
        {
            userAge = 0;
        }
        else if (dobMonth > 5)
        {
            userAge = dobYear - 1;
        }
        else
        {
            userAge = curYear - dobYear;
        }
        
        return userAge;
        
    }
    
    void setFirstName(string firstName)
    {
        this->firstName = firstName;
    }
    
    void setLastName(string lastName)
    {
        this->lastName = lastName;
    }
    
    void setDobMonth(int dobMonth)
    {
        this->dobMonth = dobMonth;
    }
    
    void setDobDay(int dobDay)
    {
        this->dobDay = dobDay;
    }
    
    void setDobYear(int dobYear)
    {
        this->dobYear = dobYear;
    }
    
    void setCurMonth(int curMonth)
    {
        this->curMonth = curMonth;
    }
    
    void setCurDay(int curDay)
    {
        this->curDay = curDay;
    }
    
    void setCurYear(int curYear)
    {
        this->curYear = curYear;
    }
    
private:
    string firstName, lastName;
    int dobMonth, dobDay, dobYear, curMonth, curDay, curYear;
};

int main()
{
    HeartRates heartRates = HeartRates("First", "Last", 0, 0, 0, 0, 0, 0);
    heartRates.getFirstName();
    heartRates.setFirstName("First Name");
    heartRates.getFirstName();
    heartRates.getLastName();
    heartRates.setLastName("Last Name");
    heartRates.getLastName();
    heartRates.getDobMonth();
    heartRates.setDobMonth(1);
    heartRates.getDobMonth();
    heartRates.getDobDay();
    heartRates.setDobDay(1);
    heartRates.getDobDay();
    heartRates.getDobYear();
    heartRates.setDobYear(1940);
    heartRates.getDobYear();
    heartRates.getCurMonth();
    heartRates.setCurMonth(4);
    heartRates.getCurMonth();
    heartRates.getCurDay();
    heartRates.setCurDay(21);
    heartRates.getCurDay();
    heartRates.getCurYear();
    heartRates.setCurYear(2019);
    heartRates.getCurYear();
    
    cout << "Enter your first name: ";
    cout << heartRates.getFirstName() << endl;
    
    cout << "Enter your last name: ";
    cout << heartRates.getLastName() << endl;
    
    cout << "Enter your birthdate: " << endl;
    
    cout << "Month: ";
    cout << heartRates.getDobMonth() << endl;
    
    cout << "Day: ";
    cout << heartRates.getDobDay() << endl;
    
    cout << "Year: ";
    cout << heartRates.getDobYear() << endl;
    
    cout << "Enter today's date" << endl;
    
    cout << "Month: ";
    cout << heartRates.getCurMonth() << endl;
    
    cout << "Day: ";
    cout << heartRates.getCurDay() << endl;
    
    cout << heartRates.getCurYear() << endl;
    
    return 0;
}
