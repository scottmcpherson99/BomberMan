#include <iostream>
#include <string>
#include <optional>


class OptionalData
{
public:

	OptionalData() : data()
	{

	}
	

	void setValue(std::optional<std::string> input_)
	{
		data.swap(input_);
	}

	void clearValue()
	{
		data.reset();
	}

	bool CheckIfValueExists() const
	{
		if (data.has_value())
		{
			return true;
		}
		else if (!data.has_value())
		{
			return false;
		}
	}

	std::string retrieveValue() const
	{
		
		return data.value_or("The value is empty!");
	}

private:
	std::optional<std::string> data;
};


int main()
{
	OptionalData optionalData;
	std::string inputData;
	int choice = 0;

	while (choice != -1)
	{
		std::cout << "To check the current value enter 1." << std::endl;
		std::cout << "To check if the value exists enter 2." << std::endl;
		std::cout << "To set the value enter 3." << std::endl;
		std::cout << "To clear the current value enter 4." << std::endl;
		std::cout << "To exit the program enter -1." << std::endl;

		std::cin >> choice;

		switch (choice)
		{
		case 1: 
			std::cout << optionalData.retrieveValue() << std::endl;
			break;

		case 2:
			if (optionalData.CheckIfValueExists() == true)
			{
				std::cout << "A value exists!" << std::endl;
			}
			else if (optionalData.CheckIfValueExists() == false)
			{
				std::cout << "A value does not exist!" << std::endl;
			}
			break;

		case 3:
			std::cout << "Please enter the data you wish to save." << std::endl;
			std::cin >> inputData;
			optionalData.setValue(inputData);
			std::cout << "The data has been saved!" << std::endl;
			break;

		case 4:
			optionalData.clearValue();
			std::cout << "The value has been cleared!" << std::endl;
			break;
		}
	}
	return 0;
}