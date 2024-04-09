// cppChecker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// C++ program to illustrate
//  strcpy() function in C/C++



BOOL CreateProcessAsUserA(
  [in, optional]      HANDLE                hToken,
  [in, optional]      LPCSTR                lpApplicationName,
  [in, out, optional] LPSTR                 lpCommandLine,
  [in, optional]      LPSECURITY_ATTRIBUTES lpProcessAttributes,
  [in, optional]      LPSECURITY_ATTRIBUTES lpThreadAttributes,
  [in]                BOOL                  bInheritHandles,
  [in]                DWORD                 dwCreationFlags,
  [in, optional]      LPVOID                lpEnvironment,
  [in, optional]      LPCSTR                lpCurrentDirectory,
  [in]                LPSTARTUPINFOA        lpStartupInfo,
  [out]               LPPROCESS_INFORMATION lpProcessInformation
);

BOOL CreateProcessAsUserW                                      (
  [in, optional]      HANDLE                hToken,
  [in, optional]      LPCWSTR               lpApplicationName,
  [in, out, optional] LPWSTR                lpCommandLine,
  [in, optional]      LPSECURITY_ATTRIBUTES lpProcessAttributes,
  [in, optional]      LPSECURITY_ATTRIBUTES lpThreadAttributes,
  [in]                BOOL                  bInheritHandles,
  [in]                DWORD                 dwCreationFlags,
  [in, optional]      LPVOID                lpEnvironment,
  [in, optional]      LPCWSTR               lpCurrentDirectory,
  [in]                LPSTARTUPINFOW        lpStartupInfo,
  [out]               LPPROCESS_INFORMATION lpProcessInformation
);
 

 
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	// Strings Declared
	 char str1[] =  "Hello Geeks!";
	char str2[] = "GeeksforGeeks";

	char str3[40];
	char str4[40];

	char str5[] = "GfG";

	// String copy used
	// strcpy(str2,
  
  //  str1);
	// strcpy(str3, "Copy successful");
	// std::strcat(str4, str5);

	// Strings Printed
	// cout << "str1: " << str1 << "\nstr2: " << str2
	// 	<< "\nstr3: " << str3 << "\nstr4: " << str4;







  


	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
