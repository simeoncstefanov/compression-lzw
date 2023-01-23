#pragma once 

#include <string>
#include <vector>

#include "FileBlob.hpp"

class Directory
{
public:
	Directory();
	Directory(const std::string& name, Directory* directory);
	Directory(const std::string& name, const std::vector<Directory>& directories);
	Directory(const std::string& name, const std::vector<FileBlob>& files);
	Directory(
		const std::string& name, 
		const std::vector<Directory>& directories, 
		const std::vector<FileBlob>& files
	);

	Directory(const Directory& other);
	~Directory();

	void addFile(FileBlob& file);
	void addDirectory(Directory& directory);

private:
	std::string _name;
	std::vector<Directory*> _directories;
	std::vector<FileBlob*> _files;
};