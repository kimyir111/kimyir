#include <stdio.h>
int main()
{
	int i;
	float f;
	double d;

	i=(long)('a'+1.3); 
	f=2.49+i;		   
	d=(double)f*i;	   

	// ������ �ս� ���θ� Ȯ���ϱ� ���� ����� ���ϴ�.
	printf("%d \n", i);
	printf("%lf \n", f);
	printf("%lf \n", d);
}

/*
	'a'�� �ƽ�Ű�ڵ忡 ���� ���� 97�� �ٷ������ ������ 'a'+1.3�� 98.3���� ���˴ϴ�.
	������ �̸� long ������ ���� ����ȯ�ϸ鼭 �Ǽ��ΰ� �սǵǾ� i�� 98�� �˴ϴ�. 
	������ i�� 2.49�� ���ϸ� �ս��� �ּ�ȭ�ϴ� �������� 100.49�� double������ �ڵ� ����ȯ�� �Ǹ�
	f�� float�̱� ������ �� ���� �ڷ������� ����ȯ�̵Ǹ鼭 �Ǽ��ο��� �ణ�� �ս��� �߻��մϴ�.
	float ���� f�� double�� ���� ����ȯ �Ҷ����� �ս��� �߻����� ������ �������� i�� ���ϸ� �ս��� �Ͼ�� �˴ϴ�. 
*/