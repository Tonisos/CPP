#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( string const target ) : AForm("ShrubberyCreationForm", 145 , 137), _target(target)
{

}


ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & toCopy ) : AForm(toCopy.getName(), toCopy.getSignGrade(), toCopy.getExecuteGrade())
{
	*this = toCopy;
}


ShrubberyCreationForm::~ShrubberyCreationForm( void )
{

}


ShrubberyCreationForm&	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & toAssign )
{
	if (this != &toAssign)
	{
		AForm::operator=(toAssign);
		_target = toAssign._target;
	}
	return (*this);
}


void	ShrubberyCreationForm::execute(Bureaucrat const & executor) 
{
	if (!getSigned())
		throw(FormNotSigned());
	if (executor.getGrade() > getExecuteGrade())
		throw(GradeTooLowException());

	std::string file = _target + ".txt";
	std::ofstream outfile(file.c_str());
	if (!outfile.is_open()) 
    	std::cerr << "Erreur lors de l'ouverture du fichier." << std::endl;
	(void) executor;

  outfile <<"                                             .\n \
                                   .         ;\n \
      .              .              ;%     ;;\n \
        ,           ,                :;%  %;\n \
         :         ;                   :;%;'     .,\n \
,.        %;     %;            ;        %;'    ,;\n \
  ;       ;%;  %%;        ,     %;    ;%;    ,%'\n \
   %;       %;%;      ,  ;       %;  ;%;   ,%;'\n \
    ;%;      %;        ;%;        % ;%;  ,%;'\n \
     `%;.     ;%;     %;'         `;%%;.%;'\n \
      `:;%.    ;%%. %@;        %; ;@%;%'\n \
         `:%;.  :;bd%;          %;@%;'\n \
           `@%:.  :;%.         ;@@%;'\n \
             `@%.  `;@%.      ;@@%;\n \
               `@%%. `@%%    ;@@%;\n \
                 ;@%. :@%%  %@@%;\n \
                   %@bd%%%bd%%:;\n \
                     #@%%%%%:;;\n \
                     %@@%%%::;\n \
                     %@@@%(o);  . '\n \
                     %@@@o%;:(.,'\n \
                 `.. %@@@o%::;\n \
                    `)@@@o%::;\n \
                     %@@(o)::;\n \
                    .%@@@@%::;\n \
                    ;%@@@@%::;.\n \
                   ;%@@@@%%:;;;.\n \
               ...;%@@@@@%%:;;;;,.." << endl;

  cout << "test" << endl;
  outfile.close();
}