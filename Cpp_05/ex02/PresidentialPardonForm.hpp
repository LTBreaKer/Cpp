#pragma once
#include "AForm.hpp"
#include <fstream>
#include <cstdlib>

class PresidentialPardonForm : public AForm	{
	private:
		std::string _target;
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &);
	
	public:

		PresidentialPardonForm(std::string);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &);
		~PresidentialPardonForm();

		std::string getTarget() const;

		void execute(Bureaucrat const & executor) const;
};