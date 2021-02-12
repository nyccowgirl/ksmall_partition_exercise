#include <iostream>
#include "ksmallSolution.hpp"
using namespace std;

int main() {

	cout << "Test 01: odd number elements" << endl;
	int test01[] = {4, 6, 2, 5, 8};
	int testSize = sizeof(test01)/sizeof(test01[0]);
	cout << "pivotIndex:" << ksmallPartition(0, testSize-1, test01) << endl;
	displayArray(testSize, test01);
	cout << endl;


	cout << "Test 02: even number elements" << endl;
	int test02[] = {8, 7, 56, 78, 4, 6, 2, 5};
	testSize = sizeof(test02)/sizeof(test01[0]);
	displayArray(testSize, test02);
	cout << "pivotIndex:" << ksmallPartition(0, testSize-1, test02) << endl;
	displayArray(testSize, test02);
	cout << endl;


	cout << "Test 03: pivot already correct" << endl;
	int test03[] = {2 , 7 , 56, 78, 4, 6, 8, 5 , 8};
	testSize = sizeof(test03)/sizeof(test01[0]);
	displayArray(testSize, test03);
	cout << "pivotIndex:" << ksmallPartition(0, testSize-1, test03) << endl;
	displayArray(testSize, test03);
	cout << endl;


	cout << "Test 04: empty array" << endl;
	int test04[] = {};
	testSize = 0;
	displayArray(testSize, test04);
	cout << "pivotIndex:" << ksmallPartition(0, testSize-1, test04) << endl;
	displayArray(testSize, test04);


	int test05[] = {487, 658, 418, 564, 282, 804, 41, 300, 929, 467, 997, 215, 70, 477, 294, 954, 188, 49, 320, 673, 439, 590, 12, 992, 787, 318, 926, 636, 920, 272, 368, 726, 134, 288, 862, 65, 881, 417, 916, 101, 901, 583, 964, 331, 146, 792, 548, 532, 86, 133, 530, 643, 511, 816, 969, 394, 602, 231, 860, 107, 326, 530, 441, 13, 736, 245, 387, 587, 178, 322, 964, 389, 976, 412, 745, 801, 270, 852, 853, 878};
	testSize = sizeof(test05)/sizeof(test05[0]);
	cout << "Your Solution Code is: " <<  ksmallPartition(0, testSize-1, test05) << endl;
}
