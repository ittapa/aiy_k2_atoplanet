#include <stdio.h>
#include <wiringPi.h>

int main(){


	if(wiringPiSetup()==-1) return -1; //wiringPi를 설정하는 함수입니다. 만약 설정되지 않았다면 -1이 리터되어 메인함수가 종료합니다.

	pinMode(1,PWM_OUTPUT); //핀모드를

	for(int i=0;i<1024;i++) //for문을 이용하여 동작을 5번 실행합니다.

	{

		pwmWrite(1,i); //led를 켭니다.(1)
		delay(3); // 지연


	}


	for(int i=1024;i>0;i--) //for문을 이용하여 동작을 5번 실행합니다.

	{

		pwmWrite(1,i); //led를 켭니다.(1)
		delay(3); // 지연

	}

	return 0;





}
