# This is my review on book DSA (Sachi Nandan Mohanty, Pabitra Kumar tripathy)

## Chapter 1

- Describes and defines the Data Structures
- Two types
  - linear 
    - array
    - queue
    - stack

  - non-linear
    - tree
    - graph
    - tables
    - sets

- Operations like travering, insretion, searching, sorting etc.
- floor(5.23 = 5), ceiling(5.23 = 6), absolute(integer part 5.5 = 5)
- space complexity(memory required by program)
- time complexity(time taken by program for comoilation)
- three cases(worst,average,best) for algorithem
- notations(big o notation etc.)


## Chapter 2

- Array (to store more than one value of same data type in one variable)
    - One dimensional
    - Multi dimensional
- String (array of character
    - char[10] = "India"(array will be : I,n,d,i,a,/o  , where /o is null therefore loop is not needed)
    - char[10] = "I""n""d""i""a" ( array will be I,n,d,i,a , no null value here loop is needed)
    - char to string
    ```c++
    #include<iostream.h>
	void main()
	{
		char x[20];
		   int i;
	cout<<"\nEnter a string";
	for(i=0;i<10;i++)
	cin>>x[i];

	x[i]='\0'; /* CONVERTING THE CHARACTER ARRAY TO STRING */
	cout<<"\n THE ENTERED STRING IS "<<x;
	}

    ```