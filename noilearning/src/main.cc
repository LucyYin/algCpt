/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * main.cc
 * Copyright (C) 2019 Kim <yuxuecai@gmail.com>(::)
 * 
 * noilearning is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
	 * 
 * noilearning is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <iostream>
#include <stdio.h>


int main()
{
	int a;
	int b;
	int c;
	/*a=9;
	 b=7;
	 c=5;*/
	std::cin>>a;
	std::cin>>b;
	std::cin>>c;
	/*if(a<b )
	{
		if(a<c)
		std::cout << a ;

		if (b<c)
		std::cout << "  " << b << "  " << c << std::endl;
		else
			std::cout << "  " << c << "  " << b << std::endl;

} 
else*/ 
	int d;
	if (a>=b)
	{       


		d=a;

		a=b;

		b=d;

		/*if (a>=c)
		{   d=a;
			a=c;
			c=d;
	}

	if (b>=c)
	{   d=b;
		b=c;
		c=d;
	}*/


		//std::cout << a <<" "<< b <<" "<< c << std::endl;

	}
	if (a>=c)
	{   d=a;
		a=c;
		c=d;
	}

	if (b>=c)
	{   d=b;
		b=c;
		c=d;
	}	

	std::cout << a <<" "<< b <<" "<< c << std::endl;


	//std::cin>>a;
	//std::cout<<a<<std::endl;

	//if(a%3==0)
	//std::cout<<"ni hao"<<std::endl;
	//else
	//std::cout<<"hola"<<std::endl;

	/*if(a<0)
	std::cout<<"a isn't positive"<<std::endl;
	if(a==0)
	std::cout<<"a=0"<<std::endl;
	if(a>0)
	std::cout<<"a is positive"<<std::endl;*/


	return 0;
}

