#include "Directory.hpp"

Directory::Directory()
{
}

Directory::Directory(const std::string& name, Directory* directory)
{
}

Directory::Directory(const std::string& name, const std::vector<Directory>& directories)
{
}

Directory::Directory(const std::string& name, const std::vector<FileBlob>& files)
{
}

Directory::Directory(const std::string& name, const std::vector<Directory>& directories, const std::vector<FileBlob>& files)
{
}

Directory::Directory(const Directory& other)
{
}

Directory::~Directory()
{
}

void Directory::addFile(FileBlob& file)
{
}

void Directory::addDirectory(Directory& directory)
{
}
