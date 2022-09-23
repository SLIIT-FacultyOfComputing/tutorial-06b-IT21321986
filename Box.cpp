#include "Box.h"
#include <iostream>
using namespace std;

// Implement setters and getters
void Box::setLength(int length) {
	Length=length;
}
void Box::setWidth(int width) {
	Width = width;;
}
void Box::setHeight(int height) {
	Height = height;;
}
int Box::getLength() {
	return Length;
}
int Box::getWidth() {
	return Width;
}
int Box::getHeight() {
	return Height;
}

// Implemenet the calcVolume() function
int Box::calcVolume() {
	return Length * Height * Width;
}
