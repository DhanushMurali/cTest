#include<Windows.h>
#include<iostream>

int main()
{
	
	char PCName[500];
	DWORD size = 500;
	GetComputerNameA(PCName, &size);
	std::cout << "PCNAME : " << PCName << std::endl;
	return 0;
}