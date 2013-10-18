#include "braitenberg_vehicle.h"

BraitenbergVehicle::BraitenbergVehicle()
: type_(TYPE_A)
, factor1_(1.0)
, factor2_(0.0)
{
}

BraitenbergVehicle::BraitenbergVehicle(Type type, float factor1, float factor2)
: type_(type)
, factor1_(factor1)
, factor2_(factor2)
{
}

void BraitenbergVehicle::computeWheelSpeeds(float left_in, float right_in, float& left_out, float& right_out)
{
  //==================== YOUR CODE HERE ====================
  // Instructions: based on the input from the left and
  //               right sonars compute the speeds of the
  //               wheels. Use the parameters stored in the
  //               private fields type_, factor1_, and
  //               factor2_ (if applicable).

	if (type_ == TYPE_A)	
	{
		/*
		* Multiplying factor1 by both inputs.
		*/
		left_out = left_in * factor1_;
		right_out = right_in * factor1_;
	}
	else if (type_ == TYPE_B)
	{
		/*
		* Multiplying factor1 by both inputs.
		*/
		left_out = right_in * factor1_;
		right_out = left_in * factor1_;
	}
	else if (type_ == TYPE_C) 
	{
		/*
		* The figure for vechicle C is almost the same as B except, both wheel are affected by factor2_ as well.
		* 
		*/
		left_out = right_in * (factor1_ + factor2_);
		right_out = left_in * (factor1_ + factor2_);
	}

  // =======================================================
}

