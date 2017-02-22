//PROJECT NAME: Complex numbers calculator

//LIMITATIONS 
// 1. ALL ANGLES FOR POLAR FORM ARE BETWEEN 0 AND 2 PI.(NO NEGATIVE ANGLES)

#include <iostream>
#include <cmath>
#include <iomanip>
#include <math.h>
using namespace std;

//Functions
void toPolar(){
	_magnitude = sqrt ( (_real*_real)+ (_imaginary*_imaginary) );
		
	if (_real > 0 && _imaginary > 0){
		_angle = atan((_imaginary/_real));
	}
	else if (_real < 0 && _imaginary > 0){
		_angle = PI - atan( (_imaginary / (-1* _real) ) );
	}
	else if (_real < 0 && _imaginary < 0){
		_angle = PI + atan( ( (-1 * _imaginary) / (-1 * _real) ) );
	}
	else if (_real > 0 && _imaginary < 0){
		_angle = (2*PI) - atan( ( (-1 * _imaginary) / _real ) );
	}
	else {
		_angle = 0;
	}
}

void toRectangular(){
	double trig_calc_angle = 0;
	
	if (_angle > 0 && _angle < (PI/2)){
		_real = _magnitude * cos (_angle);
		_imaginary = _magnitude * sin(_angle);
	}
	else if (_angle > (PI/2) && _angle < PI ){
		trig_calc_angle = PI - _angle;
		_real = (_magnitude * cos (trig_calc_angle)) * -1;
		_imaginary = _magnitude * sin(trig_calc_angle);
	}
	else if (_angle > PI && _angle < (3*PI/2)){
		trig_calc_angle = _angle - PI;
		_real = (_magnitude * cos (trig_calc_angle)) * -1;
		_imaginary = (_magnitude * sin(trig_calc_angle)) * -1;
	}
	else if (_angle > (3*PI/2) && _angle < (2*PI)){
		trig_calc_angle = (2*PI) - _angle;
		_real = _magnitude * cos (trig_calc_angle);
		_imaginary = (_magnitude * sin(trig_calc_angle)) * -1;	
	}
}