#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define PI 3.14

int printResult();
int ihaper(void);
int botbot();
int hadouken();
void counter();
float calcAreaCirc(float radius);
float calcAreaRect(float length, float width);
float calcAreaTri(float base, float height);
void printAnsor(int choice);
void subPointer();

void sum( int array1[100][100], int array2[100][100], int size){
	int i, j;
		
	for( i = 0; i<size; i++){
		for( j = 0; j<size; j++){
			printf("%4d ", array1[i][j] + array2[i][j]);
		}
		printf("\n");
	}
	return;
}

void product( int array1[100][100], int array2[100][100], int size){
	int i, j;
	for( i = 0; i<size; i++){
		for( j = 0; j<size; j++){
			printf("%4d ", array1[i][j] * array2[i][j]);
		}
		printf("\n");
	}
	return;
}


int honk(){
	int array1[100][100], array2[100][100] ;
	int size,i ,j;
	
	printf("Size: ");
	scanf("%d", &size);
	
	printf("Array1: \n");
	for( i = 0; i<size; i++){
		for( j = 0; j<size; j++){
			scanf("%d", &array1[i][j]);
		}
	}
	
	
	printf("\nArray2: \n");
	for( i = 0; i<size; i++){
		for( j = 0; j<size; j++){
			scanf("%d", &array2[i][j]);
		}
	}
	
	printf("\nSum:\n");
	sum(array1,array2,size);
	
	printf("\nProduct:\n");
	product(array1,array2,size);
	
	return 0;
}
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int meep() {
    int arr[10];

    printf("Enter 10 integers for the array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    
    int largest = arr[0], smallest = arr[0];
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        sum += arr[i];

        if (arr[i] > largest) {
            largest = arr[i];
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

   
    double average = (double)sum / 10;

    bubbleSort(arr, 10);

    
    printf("Largest value: %d\n", largest);
    printf("Smallest value: %d\n", smallest);
    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2lf\n", average);

    printf("Array in ascending order: ");
    displayArray(arr, 10);

   
    for (int i = 0; i < 10 / 2; i++) {
        swap(&arr[i], &arr[10 - i - 1]);
    }

    printf("Array in descending order: ");
    displayArray(arr, 10);

    return 0;
}

void subPointer(){

    int num1, num2,sub;
    int *ptr1, *ptr2, *ptrMinus;
    
    ptr1 = &num1;
    ptr2 = &num2;
    ptrMinus = &sub;
	
    printf("Enter the first number: ");
    scanf("%d",&num1);
    
    printf("Enter the second number: ");
    scanf("%d",&num2);
    
    *ptrMinus = *ptr1-*ptr2;
    
	printf("Difference is = %d\n", sub);
    
    return;
}

void counter(){
	int i;
	for(i=1;i<=5;i++){
		printf("%d\n",i);
	}
}
int ihaper(void){
	int count=1;
	while(count<=5){
	counter();
	count++;
	}
	return 0;
}

int getInput(void){
	int input;
	scanf("%d", &input);
	return input;
}
int botbot(){
	int choice;
	printf("enter your choice:\n");
	printf("1.) Area of a circle\n");
	printf("2.) Area of a rectangle\n");
	printf("3.) Area of a triangle\n");
	choice = getInput();
	printAnsor(choice);
	return 0;
}

float calcAreaCirc(float radius){
	return PI * radius * radius;
}
float calcAreaRect(float length, float width){
	return length*width;
}
float calcAreaTri(float base, float height){
	return (base*height)/2;
}

void printAnsor(int choice){
	float area, length, width, radius, base, height;
	switch (choice){
		case 1:
		printf("enter radius\n");
		radius = (float)(getInput());
		area = calcAreaCirc(radius);
		printf("the area of this circle is %.2f\n", area);
		break;
		case 2:
		printf("enter length\n");
		length = getInput();
		printf("enter width\n");
		width = getInput();
		area = calcAreaRect(length, width);
		printf("the area of this rectangle is %.2f\n", area);
		break;
		case 3:
		printf("enter base\n");
		base = getInput();
		printf("enter height\n");
		height = getInput();
		area = calcAreaTri(base, height);
		printf("the area of this rectangle is %.2f\n", area);
		break;
		default:
		printf("Invalid Choice. Exiting program instead");
		break;
	}
	return;
}

int hadouken(){
	int numbers[15];
	int sumOdd = 0, totalOdd = 0, sumEven = 0, totalEven = 0;
	printf("enter 15 numbers\n");
	for(int i = 0; i < 15; i++){
	scanf("%d", &numbers[i]);
		if (numbers[i] % 2 ==0){
			sumEven += numbers[i];
			totalEven++;
		}
		else{
			sumOdd += numbers[i];
			totalOdd++;
		}
	}
	float averageOdd = 0, averageEven = 0;
	averageOdd = sumOdd / totalOdd;
	averageEven = sumEven / totalEven;
	printf("\n The sum of the odd numbers is:\n%d\nThe average is:\n%.2f", sumOdd, averageOdd);
	printf("\n The sum of the even numbers is:\n%d\nThe average is:\n%.2f", sumEven, averageEven);
	return 0;
}

int printResult(int choice){
	float average, area, length, width, radius, base, height, perimeter;
	int meno, prelimChoice, midtermChoice, semiChoice, finalsChoice, score1, score2, score3, score4, score5,quantity, price,total, discounted5, discounted10, n, sumEven=0, sumOdd=0, odd, even, i=0, num, sum = 0, test;
	switch (choice){
	
		case 1:
		printf("\n");
		printf("Prelim\n");
		printf("Choose a lab activity\n1.)Lab 3\n2.)Lab 4\n3.)Lab 5\n");
		prelimChoice = getInput();
		
		switch(prelimChoice){
			
			case 1:
			printf("Area of a Triangle\n");
			printf("enter height\n");
			scanf("%f", &height);
			printf("enter base\n");
			scanf("%f", &base);
			area = (base*height)/2;
			printf("the area is %.2f", area);
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
			break;
			
			case 2:
			printf("Area of a Rectangle\n");
			printf("enter length\n");
			scanf("%f", &length);
			printf("enter width\n");
			scanf("%f", &width);
			perimeter = (length+width)*2;
			printf("the perimeter is %.2f", perimeter);
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
			break;
			
			case 3:
			printf("Average of 5 Scores\n");
			printf("enter 1st score:\n");
			scanf("%d", &score1);
			printf("enter 2nd score:\n");
			scanf("%d",&score2);
			printf("enter 3rd score:\n");
			scanf("%d",&score3);
			printf("enter 4th score:\n");
			scanf("%d",&score4);
			printf("enter 5th score:\n");
			scanf("%d",&score5);
			average = ((float)score1+(float)score2+(float)score3+(float)score4+(float)score5)/5;
			printf("the average is %.2f", average);
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice");
			break;
			}
			break;
			
			default:
			printf("invalid choice");
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
			break;
				
		}

		break;
		
			case 2:
			printf("\n");
			printf("Midterm\n");
			printf("Choose a lab activity\n1.)Lab 1\n2.)Lab 3\n3.)Lab 5\n");
			midtermChoice = getInput();
		
	    	switch(midtermChoice){
			
			case 1:
			printf("Discounted Prices\n");
			printf("enter a quantity\n");
	        scanf("%d", &quantity);
	        printf("enter price\n");
	        scanf("%d", &price);
	        total = (price*quantity);
        	discounted5 = (total-total*.05);
	        discounted10 = (total-total*.1);
	
        	if(total>=1000){
	    	printf("you qualify for a 10 percent discount so your total is %d", discounted10);
	    	}
	    	else if(total>3000){
	    	printf("your qualify for a 5 percent discount so your total is %d", discounted5);
	    	}
	    	else{
	    	printf("you do not qualify for a discount therefore your total is still %d",total);
	    	}
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
			break;
			
			case 2:
			printf("Sum of Odd numbers and Sum of Even numbers\n");
    		printf("Enter the limit: ");
    		scanf("%d", &n);
			
    		for (i = 1; i <= n; i++) {
        	if (i % 2 == 0) {
            printf("even: %d\n", i);
            sumEven += i;
        	} else {
            printf("odd: %d\n", i);
            sumOdd += i;
        	}
  	 		 }

   			printf("\nsum of all even numbers from 1 to %d: %d\n", n, sumEven);
   			printf("sum of all odd numbers from 1 to %d: %d\n", n, sumOdd);
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
			break;

			
			case 3:
			
			printf("Sum of all entered odd numbers\n");
			printf("enter numbers, then press EOF to stop:\n");
			do {
			test=scanf("%d",&num);
			if(test!=EOF&&num%2!=0){
			sum+=num;
			}
			i++;
			}
			while(test!=EOF);
			printf("\nThe sum of all the odd numbers entered is %d", sum);
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
		break;
		
		case 3:
			printf("\n");
			printf("Semi-Finals\n");
			printf("Choose a lab activity\n1.)Lab 1\n2.)Lab 2\n3.)Lab 3\n");
			semiChoice = getInput();
		
			switch(semiChoice){
			
			case 1:
			printf("Counter Function\n");
			ihaper();
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice");
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
			break;
			}
			break;
			
			case 2:
			printf("Getting the radius of a circle and getting the areas of a triangle or rectangle using arrays\n");
			botbot();
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
			break;
			
			case 3:
			printf("pointer\n");
			subPointer();
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
			break;
			
			default:
			printf("invalid choice");
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
			break;
				
		}
		break;
		
		case 4:	     
		printf("\n");
		printf("Finals\n");
		printf("Choose a lab activity\n1.)Lab 1\n2.)Lab 2\n3.)Lab 3\n");
		finalsChoice = getInput();
		
		switch(finalsChoice){
			
			case 1:
			printf("Arrays to show average\n");
			hadouken();
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
			break;
			
			case 2:
			printf("Displaying arrays\n");
			meep();
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
			break;
			
			case 3:
			printf("Sum and Product of the contents of 2 arrays\n");
			honk();
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
			break;
			
			default:
			printf("invalid choice");
			printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
			scanf("%d", &meno);
			switch(meno){
			
			case 1:
			printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
			choice = getInput();
			printResult(choice);
			break;
			
			case 2:
			printf("Exiting Program...");
			break;
			
			default:
			printf("Invalid Choice. Exiting program instead");
			break;
			}
			break;
				
		}

		break;
		
		case 5:
		printf("Exiting Program...");
		break;
		
		default:
		printf("invalid Choice");
		printf("\nWhat would you like to do?\n1.)Go back to menu\n2.)Exit program\n");
		scanf("%d", &meno);
		switch(meno){
			
		case 1:
		printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
		choice = getInput();
		printResult(choice);
		break;
			
		case 2:
		printf("Exiting Program...");
		break;
			
		default:
		printf("Invalid Choice. Exiting program instead");
		break;
			}
		}
		
	
return 0;
}

int main(){
	int choice;
	printf("choose a term:\n1.)Prelim\n2.)Midterm\n3.)Semi-Finals\n4.)Finals\n5.)Exit Program\n");
	choice = getInput();
	printResult(choice);
	return 0;
}

