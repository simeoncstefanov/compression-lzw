#pragma once

#include <queue>
#include <string>

#include "../Zippers/Zipper.hpp"
#include "../Encoders/Encoder.hpp"

template<class TInput, class TOutput>
class Archiver
{
public:
	Archiver() = delete;
	Archiver(Zipper* zipper);
	Archiver(Zipper* zipper, std::vector<Encoder<TInput, TOutput>>* encoders);
	~Archiver();

	void addEncoder(Encoder<TInput, TOutput>* encoder);

	void zip(const std::string& path);
	void unzip(const std::string& path = "");
	void info();
	void refresh(const std::string& path);
	bool ec(std::string& error);

private:
	void loadDirectory(const std::string& dir);

	Zipper* _zipper;
	std::queue<Encoder<TInput, TOutput>*> _encoders;
	
	Directory* _loadedDirectory;
};