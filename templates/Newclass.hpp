#ifndef  NEWCLASS_HPP
# define  NEWCLASS_HPP

class							Newclass
{
	public:
		Newclass(void);
		~Newclass(void);
		Newclass(Newclass const & src);
		Newclass				&operator=(Newclass const & src);

	private:

};

#endif
