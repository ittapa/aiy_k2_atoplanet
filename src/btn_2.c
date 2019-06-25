#include <stdio.h>
#include <wiringPi.h>

int main()
{

    int i;

    if (wiringPiSetup() == -1)
        return -1; //wiringPi를 설정하는 함수입니다. 만약 설정되지 않았다면 -1이 리터되어 메인함수가 종료합니다.

   pinMode(1, OUTPUT);
pinMode(5, INPUT);
int btn ;

while(1){
btn = digitalRead(25);
if(btn ==0){
	digitalWrite(1, HIGH);
	printf("on \n");
}else{
	digitalWrite(1, LOW);
	printf("off \n");
          }
delay(500);
}


    return 0;

}
