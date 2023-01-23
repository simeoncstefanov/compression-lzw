#pragma once

#include <string>
#include <vector>

#include "iostreamdirectory.hpp"
#include "../DirectoryClasses/Directory.hpp"

class Zipper
{
public:
	virtual void zipFiles(std::vector<iostreamdirectory> files) = 0;
	virtual Directory* unzipFiles() const = 0;

	std::string getDirectory() { return _directory; };
	void setDirectory(const std::string & directory) { _directory = directory; };
private:
	std::string _directory;
};