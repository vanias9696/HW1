#include <iostream>

class Person
{
	private:
		static constexpr LIMIT = 25;
		string mLastName; // Person's last name
		char mFirstName[LIMIT]; // Person's first name
	public:
		Person()
		{
			mLastName = ""; 
			mFirstName[0] = '\0'; 
		} // #1
		Person(const string & ln, const char * fn = "Heyyou")
		{
			mLastName = ln;
			strcpy(mFirstName, fn);
		}
		// the following methods display mLastName and mFirstName
		void Show() const
		{
			std::cout << mFirstName << " " << mLastName << std::endl;
		}// firstname lastname format
		void FormalShow() const
		{
			std::cout << mLastName << " " << mFirstName << std::endl;
		}// lastname, firstname format
};
