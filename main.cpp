#include "mbed.h"

DigitalOut led(LED1);
DigitalIn button(BUTTON1, PullUp);

int main()
{
	printf("NEW Hello world from Mbed CE! \n");
	thread_sleep_for(150);

	while(true)
	{
		if (button== false)
		{

			printf("Button Pressed ^^^^ \n");
			
			for(int i = 0;i<9;i++)
			{
				printf("blink count: %d \n",i);
				led = true;
				thread_sleep_for(800);
				led = false;
				thread_sleep_for(1200);
			
			}
		}
		else
		{
			printf("NEW Button Not pressed2 **** \n");
			led = false;
		}
	}

}