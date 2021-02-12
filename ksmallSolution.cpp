#include <iostream>
#include <iomanip>
#include "ksmallSolution.hpp"
using namespace std;

int ksmallPartition(int startIndex, int endIndex, int anArray[]) {
	int pivotIndex = 0;
	
	// YOUR CODE HERE
    // Base case of array empty or size of 1
    if (endIndex <= 0) {
        pivotIndex = endIndex;
    } else {
        
        // For array with size of 2+
        int temp;
        // Continue through array until startIndex >= endIndex.
        do {
        /*
        Compare value at endIndex to value at startIndex (pivot 
        value). If it is less than or equal to, move value before
        startIndex by swapping with next value at (startIndex + 1)
        increment startIndex and move pivot value to that index.
        Otherwise, decrement endIndex.  
        */
        if (anArray[endIndex] <= anArray[startIndex]) {
            temp = anArray[startIndex];
            anArray[startIndex] = anArray[endIndex];
            anArray[endIndex] = anArray[startIndex + 1];
            anArray[startIndex + 1] = temp;
            startIndex++;
        } else {
            endIndex--;
        }

        } while (startIndex < endIndex);
        
        // pivotIndex for pivot value is at startIndex.
        pivotIndex = startIndex;
    }

	return pivotIndex;
}

void displayArray(int arraySize, int anArray[]) {
	cout << setfill('0');
	for(int i=0; i<arraySize; i++) {
		cout << setw(3) << i << " ";
	}
	cout << endl << setfill(' ');
	for(int i=0; i<arraySize; i++) {
		cout << setw(3) << anArray[i] << " ";
	}
	cout << endl;
}