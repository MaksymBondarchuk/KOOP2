#pragma once
#include <ostream>

class date
{
public:
	int day;
	int month;
	int year;

	date();
	date(const int day, const int month, const int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	};
	~date();

	bool operator==(const date &obj) const
	{
		return day == obj.day &&
			month == obj.month &&
			year == obj.year;
	}

	bool operator!=(const date &obj) const
	{
		return day != obj.day ||
			month != obj.month ||
			year != obj.year;
	}

	friend std::ostream& operator<<(std::ostream& stream, const date &obj)
	{
		stream << obj.day << "." << obj.month << "." << obj.year;
		return stream;
	}
};


inline date::date()
{
}


inline date::~date()
= default;
