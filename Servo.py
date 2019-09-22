import time
import sys
from adafruit_servokit import ServoKit

if __name__ == "__main__":

    kit = ServoKit(channels=16)

    try:
        while True:
            kit.servo[0].angle = 180
            time.sleep(5)
            kit.servo[0].angle = 0
            time.sleep(5)
    except KeyboardInterrupt:
        sys.exit()

    #Rotazione continua, da provare se funziona
"""
    kit.servo[0].angle = 180
    kit.continuous_servo[1].throttle = 1
    time.sleep(1)
    kit.continuous_servo[1].throttle = -1
    time.sleep(1)
    kit.servo[0].angle = 0
    kit.continuous_servo[1].throttle = 0
"""