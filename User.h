
#pragma once


using namespace System;

public ref class User
{
public:
	String^ id;
	String^ password;
	String^ Contact_no;
	String^ Age;
	String^ name;
	int budget = 0;
	int expenses = 0;
	String^ unit_range = "";
	String^ location = "";
};
