#pragma once
#include "date.h"
#include <ostream>

class business_trip
{
public:
	const char* first_name;
	const char* last_name;

	const char* position;
	date trip_date;
	int duration;
	double money;

	business_trip();
	business_trip(const char* first_name, const char* last_name, const char* position,
	              const date trip_date, const int duration, const double money)
	{
		this->first_name = first_name;
		this->last_name = last_name;
		this->position = position;
		this->trip_date = trip_date;
		this->duration = duration;
		this->money = money;
	}
	business_trip(business_trip* obj)
	{
		this->first_name = obj->first_name;
		this->last_name = obj->last_name;
		this->position = obj->position;
		this->trip_date = obj->trip_date;
		this->duration = obj->duration;
		this->money = obj->money;
	}
	~business_trip();

	business_trip& operator=(const business_trip& bt);

	bool operator==(const business_trip &obj) const
	{
		return first_name == obj.first_name &&
			last_name == obj.last_name &&
			position == obj.position &&
			trip_date == obj.trip_date &&
			duration == obj.duration &&
			money == obj.money;
	}

	bool operator!=(const business_trip &obj) const
	{
		return first_name != obj.first_name ||
			last_name != obj.last_name ||
			position != obj.position ||
			trip_date != obj.trip_date ||
			duration != obj.duration ||
			money != obj.money;
	}

	friend std::ostream& operator<<(std::ostream& stream, const business_trip &obj)
	{
		stream << "By " << obj.first_name << " " << obj.last_name << " who is "
			<< obj.position << " on " << obj.trip_date << " for " << obj.duration
			<< " days with " << obj.money << " in cash";
		return stream;
	}
};


inline business_trip::business_trip()
= default;


inline business_trip::~business_trip()
= default;


inline business_trip& business_trip::operator=(const business_trip& obj)
{
	if (this == &obj)
		return *this;

	this->first_name = obj.first_name;
	this->last_name = obj.last_name;
	this->position = obj.position;
	this->trip_date = obj.trip_date;
	this->duration = obj.duration;
	this->money = obj.money;

	return *this;
}
