#pragma once

class IGeoFig {
public:
	virtual double square() = 0;
	virtual double perimeter() = 0;
};

class Vector2D {
public:
	Vector2D();
	Vector2D(double x, double y);
	double x, y;
};

class IPrintable {
public:
	virtual void draw() = 0;
};

class IDialogInitiable {
	virtual void initFromDialog() = 0;
};

class BaseCObject {
public:
	virtual const char* classname() = 0;
	virtual unsigned int size() = 0;
};

class IPhysObject {
public:
	virtual double mass() = 0;
	virtual Vector2D position() = 0;
	virtual bool operator== (IPhysObject& ob) = 0;
	virtual bool operator< (IPhysObject& ob) = 0;
};

class Line : IGeoFig, IPhysObject, IPrintable, IDialogInitiable, BaseCObject
{
public:
	Vector2D origin;
	Vector2D dir;
	
	double square() override;
	double perimeter() override;
	void draw() override;
	void initFromDialog() override;
	const char* classname() override;
	unsigned size() override;
	double mass() override;
	Vector2D position() override;
	bool operator==(IPhysObject& ob) override;
	bool operator<(IPhysObject& ob) override;
};