#pragma onces

class Iterator
{
public:
	virtual ~Iterator() {};

	virtual int Begin() = 0;
	virtual bool End() = 0;
	virtual void Next() = 0;
	virtual int CurrentIndex() = 0;
};
