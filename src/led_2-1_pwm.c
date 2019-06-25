if(wiringPiSetup() == -1) return -1;
pinMode(1, PWM_OUTPUT); // 핀모드를 설정
pwmWrite(1, 1024);
delay(500);
pwmWrite(1, 512);
delay(500);
pwmWrite(1, 256);
delay(500);
pwmWrite(1, 128);
delay(500);
for(int i=0; i<1024; i++){
pwmWrite(1, i);
delay(5);
}
for(int i=1024; i>0; i--){
pwmWrite(1, i);
delay(5);
}
