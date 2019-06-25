#include <stdio.h>
#include <wiringPi.h>

int main(){

    int i;

	if(wiringPiSetup()==-1) return -1; //wiringPi를 설정하는 함수입니다. 만약 설정되지 않았다면 -1이 리터되어 메인함수가 종료합니다.

	pinMode(1,OUTPUT); //핀모드를 29번으로 설정합니다.(BCM으로 21번이 wiringPi에서 29번이므로)
    pinMode(4,OUTPUT);

    digitalWrite(1,1); //led를 켭니다.(1)
    digitalWrite(4,1); //led를 켭니다.(1)
    delay(3000);
    digitalWrite(1,LOW); //led를 켭니다.(1)
    digitalWrite(4,LOW); //led를 켭니다.(1)


	return 0;



}
