#pragma once

#include <string>
#include <vector>

#include "Zipper.hpp"

class SZipper : public Zipper
{
public:
	SZipper() = delete;
	SZipper(const std::string& directory);

	void zipFiles(std::vector<iostreamdirectory> files) override;
	Directory* unzipFiles() const override;
};