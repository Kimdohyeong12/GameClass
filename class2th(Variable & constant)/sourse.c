#include <stdio.h>

void main()
{

#pragma region 산술 연산자
	// 1. 변수 = 변수 + 변수

	// 2. 변수 = 변수 - 리터럴 상수

	// 3. 변수 = 변수 * 심볼릭 상수

	// 4. 변수 = 리터럴 상수 / 리터럴 상수

	// 5. 변수 = 심볼릭 상수 % 리터럴 상수
#pragma endregion

#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의 조합으로
	//논리 계산을 수행하는 단위입니다.

#pragma region (10)진수를 (2)진수로 변환하는 과정
	//10진수를 1이 될 때까지 계속 2로 나누어 준 다음,
	//나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.

	// ex) 23 -> 10111
#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	// 1 byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.

	//각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한
	//다음 각각의 비트를 모두 더하여 10진수로 나타냅니다.
#pragma endregion

#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자입니다.

#pragma region AND 연산자
	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다.
    
     // int x1 = 12;  0000 1100   
	 // int x2 = 10;  0000 1010
	 //              -----------
	//                0000 1000
	
	int storage1 = 12; // 0000 1100
	int storage2 = 10; // 0000 1010
	     //              -----------               
		//                0000 1000
	//printf ("storage1 & storage2 = %d\n", storage1 & storage2);
#pragma region OR 연산자
	//두 개의 피연산자 중에 1이 있다면 1을 반환하는 연산자입니다.

	// int storage3 = 14;  0000 1110
	// int storage4 = 12;  0000 1100
	//                   -----------
	//                    0000 1110
	//printf("storage3 | storage4 = %d\n", storage3 | storage4);

#pragma region XOR연산자
	//두 개의 피연산자가 서로 같으면 0을 반환하고, 서로 다르면
	// 1을 반환하는 연산자입니다.

	// int storage5 = 8;    0000 1000
	// int storage6 = 10;   0000 1010
	//                     ----------- 
	//                      0000 0010
	//printf("storage5 ^ storage6 = %d\n", storage5 ^storage6);
#pragma endregion

#pragma region  NOT 연산자
	// 하나의 비트를 반전시키는 연산자입니다.
	
	// int storage7 = 11; 0000 1011 --> 1111 0100
	//printf("~storage7 = %d\n", ~storage7 );

	//첫 번째 비트는 부호를 나타내며, 첫번째 비트에
	//1이 있다면 값은 음수입니다.

#pragma endregion

#pragma endregion

#pragma endregion

#pragma endregion

#pragma region 시프트 연산자
	// 비트를 특정한 위치로 정해진 수만큼 이동시키는 연산자입니다.

	 //int data = 5; // 0000 0101
	 //int shift = data << 2; //0001 0100
	  //printf("shift의 값 ; %d\n", shift);
	
	  //shift = data >> 1;
	 // printf("shift 변수의 값 ; %d\n", shift);
#pragma endregion

#pragma endregion


}