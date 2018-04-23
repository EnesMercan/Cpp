#ifndef EXCEPTIONS_HPP
#define EXCEPTION_HPP
#include <iostream>
#include <exception>
#include <string>

//BURADAK�LER SADECE BAS�T SINIFLAR ALTSINIFLAR �ZELLE�T�R�LEB�L�R

class ChessException:public std::exception{
public:
	ChessException(std::string ex) :explanation(ex) {}
	virtual std::string what() {
		std::cout << explanation << std::endl;
	}
public:
	std::string explanation;
};
class OutOFBound :public ChessException {
public:
	OutOFBound(std::string ex) :ChessException(ex) {}
};
class MoveException :public ChessException {
public:
	MoveException(std::string ex) :ChessException(ex) {}
};
#endif
