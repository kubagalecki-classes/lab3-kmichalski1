#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    int      ship_number = 0;
    Stocznia s{};
    
    while (towar > 0) 
	{
        	Statek* boat = s();

        	if (typeid(*(boat)) == typeid(Zaglowiec)) 
        	{
           		ship_number++;
        	}

        	if (towar > boat->transportuj()) 
        	{
            		towar -= boat->transportuj();
            		delete boat;
        	}
        	
            else 
       		{
            		delete boat;
            		break;
        	}
    	}
    return ship_number;
}
