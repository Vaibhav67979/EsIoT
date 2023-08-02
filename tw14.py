import time
import RPi.gpio as gpio

gpio.setwarnings(False)
gpio.setmode(gpio.BOARD)
gpio.setup(38, gpio.OUT)

try:
	while(1):
		gpio.output(38,0)
		print("BUZZER OFF")
		time.sleep(1)
		gpio.output(38,1)
		print("BUZZER ON")
		time.sleep(1)
except KeyboardInterrupt:
	gpio.cleanup()
	exit() 