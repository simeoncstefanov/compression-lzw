#pragma once

#include <fstream>
#include <string>

class iostreamdirectory : public std::fstream
{
public:
	iostreamdirectory() = delete;
	iostreamdirectory(const std::string& directory)
		: std::fstream(directory), _directory(directory)
	{ }
	~iostreamdirectory();

	std::string getDirectory() const
	{
		return _directory;
	};

private:
	std::string _directory;
};