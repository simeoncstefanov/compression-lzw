#pragma once

template<class TInput, class TOutput>
class Encoder
{
public:
	Encoder();
	Encoder(const unsigned int maxCode);

	virtual void encode(TInput& input, TOutput& output) = 0;
	virtual void decode(TInput& input, TOutput& output) = 0;
	
private:
	unsigned int _maxCode;
};