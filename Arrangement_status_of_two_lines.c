// C program which determines the arrangement status of two lines.
// The two lines “intersect” with á angle.
// The two lines are “perpendicular” with 90 degrees.
// The two lines “coincide”. (They lie on the same straight line.)
// The two lines are “parallel”.

// Inputs : The keyboard inputs are the coefficients A1, B1, C1, and A2, B2, C2.

// Outputs : 

//Display a message about the status of the two lines.
// Calculate and display the followings when apply:
// Angle between the two lines.
// Intersection point coordinates (x0 , y0).
// Distance between the two lines.




#include<stdio.h>
#include<math.h>
int main(){
	
	float x0, y0;  //intersection points
	float distance; //distance of two lines
	float slope; // Equation for angle á between two lines
	
	
	float A1, B1, C1, A2, B2, C2;
	
	printf("enter values of first coefficients(A1-B1-C1):\n");
	scanf("%f %f %f",&A1, &B1, &C1);
		printf("Your first line is %.1fx+(%.1fy)+(%.1f)=0 \n",A1,B1,C1);
	
	printf("enter values of second coefficients(A2-B2-C2):\n");
	scanf("%f %f %f",&A2, &B2, &C2);
		printf("Your second line is %.1fx+(%.1fy)+(%.1f)=0 \n",A2,B2,C2);
	
	printf("\n");
	
	if( (A1/A2) == (B1/B2) && (B1/B2) == (C1/C2) ){
		
		printf("Status: Coinside Lines");
	}
	
	else if( ((A1*A2) + (B1*B2)) == 0){
		
		x0 = ( (B1*C2) - (B2*C1) ) / ( (A1*B2) - (A2*B1) );
		y0 = ( (C1*A2) - (C2*A1) ) / ( (A1*B2) - (A2*B1) );
		printf("Status: Perpendicular Lines\nAlpha= 90\nIntersection point= (%.2f,%.2f)", x0, y0);
	}
	
	else if( (A1/A2) == (B1/B2) && (B1/B2) != (C1/C2) ){
		
		printf("Status: Parallel Lines\n");
		distance = fabs(C1-C2) / sqrt( (A1*A1) + (A2*A2) );
		printf("Distance: %.3f",distance);
	}
	else if( (A1/A2) != (B1/B2) ){
		slope = ( (A1*B2) - (A2*B1) ) / ( (A1*A2) + (B1*B2) );
		slope = atan(slope) * 180 / 3.1416;
		
		x0 = ( (B1*C2) - (B2*C1) ) / ( (A1*B2) - (A2*B1) );
		y0 = ( (C1*A2) - (C2*A1) ) / ( (A1*B2) - (A2*B1) );
		
		printf("Status: Intersection Lines\n");
		printf("Alpha: %.3f\nIntersection Point: (%.2f,%.2f)",slope, x0, y0);
	}
	
	
	
	return 0;
}
