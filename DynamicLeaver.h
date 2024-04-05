#pragma once
#include <string>
//#ifdef LEAVERLIBRARYDYNAMIC_EXPORTS
//#define LEAVERLIBRARY_API __declspec(dllexport)
//#else
//#define LEAVERLIBRARY_API __declspec(dllimport)
//#endif

	class Leaver {
	public:
		 std::string leave(std::string& input);
	};