#include <stdio.h>

void main()
{

#pragma region ��� ������
	// 1. ���� = ���� + ����

	// 2. ���� = ���� - ���ͷ� ���

	// 3. ���� = ���� * �ɺ��� ���

	// 4. ���� = ���ͷ� ��� / ���ͷ� ���

	// 5. ���� = �ɺ��� ��� % ���ͷ� ���
#pragma endregion

#pragma region ��Ʈ
	// �����͸� ��Ÿ���� �ּ��� �����̸�, 0 �Ǵ� 1�� ��������
	//�� ����� �����ϴ� �����Դϴ�.

#pragma region (10)������ (2)������ ��ȯ�ϴ� ����
	//10������ 1�� �� ������ ��� 2�� ������ �� ����,
	//���� ��ġ�� ������ ���� �Ʒ����� ���� ������� �����մϴ�.

	// ex) 23 -> 10111
#pragma endregion

#pragma region (2)������ (10)������ ��ȯ�ϴ� ����
	// 1 byte�� 2������ ����� ���� 2�� �������� ��Ÿ���ϴ�.

	//������ ��Ʈ�� 1�� �ִٸ� 1�� 2�� ������ ��ġ�� �����
	//���� ������ ��Ʈ�� ��� ���Ͽ� 10������ ��Ÿ���ϴ�.
#pragma endregion

#pragma region ��Ʈ ������
	// ��Ʈ ������ �� ������ �����ϱ� ���� ����ϴ� �������Դϴ�.

#pragma region AND ������
	// �� ���� �ǿ����ڰ� ��� 1�̸� 1�� ��ȯ�ϴ� �������Դϴ�.
    
     // int x1 = 12;  0000 1100   
	 // int x2 = 10;  0000 1010
	 //              -----------
	//                0000 1000
	
	int storage1 = 12; // 0000 1100
	int storage2 = 10; // 0000 1010
	     //              -----------               
		//                0000 1000
	//printf ("storage1 & storage2 = %d\n", storage1 & storage2);
#pragma region OR ������
	//�� ���� �ǿ����� �߿� 1�� �ִٸ� 1�� ��ȯ�ϴ� �������Դϴ�.

	// int storage3 = 14;  0000 1110
	// int storage4 = 12;  0000 1100
	//                   -----------
	//                    0000 1110
	//printf("storage3 | storage4 = %d\n", storage3 | storage4);

#pragma region XOR������
	//�� ���� �ǿ����ڰ� ���� ������ 0�� ��ȯ�ϰ�, ���� �ٸ���
	// 1�� ��ȯ�ϴ� �������Դϴ�.

	// int storage5 = 8;    0000 1000
	// int storage6 = 10;   0000 1010
	//                     ----------- 
	//                      0000 0010
	//printf("storage5 ^ storage6 = %d\n", storage5 ^storage6);
#pragma endregion

#pragma region  NOT ������
	// �ϳ��� ��Ʈ�� ������Ű�� �������Դϴ�.
	
	// int storage7 = 11; 0000 1011 --> 1111 0100
	//printf("~storage7 = %d\n", ~storage7 );

	//ù ��° ��Ʈ�� ��ȣ�� ��Ÿ����, ù��° ��Ʈ��
	//1�� �ִٸ� ���� �����Դϴ�.

#pragma endregion

#pragma endregion

#pragma endregion

#pragma endregion

#pragma region ����Ʈ ������
	// ��Ʈ�� Ư���� ��ġ�� ������ ����ŭ �̵���Ű�� �������Դϴ�.

	 //int data = 5; // 0000 0101
	 //int shift = data << 2; //0001 0100
	  //printf("shift�� �� ; %d\n", shift);
	
	  //shift = data >> 1;
	 // printf("shift ������ �� ; %d\n", shift);
#pragma endregion

#pragma endregion


}