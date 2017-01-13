#include "MKL46Z4.h"
#include "slcd.h"
#include "pit.h"
#include "buttons.h"
#include "leds.h"

int main(void)
{
	int i;
	slcdInitialize();
	ledsInit();
	redLEDOn();
	
	slcdDisplay(1234,10);
	while(1)
	{
		for( i = 0; i < 300000; i++){};
			greenLEDToggle();
	}
}
