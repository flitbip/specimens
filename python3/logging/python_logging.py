import random
import time
from datetime import datetime
import logging

logging.basicConfig(
    filename='logging.log',
    filemode='a',
    level=logging.DEBUG, 
    format=f'%(levelname)s --> {datetime.now()} --> %(name)s:%(message)s'
)

def log_tester():
    x = random.randint(0,4)
    if x == 0:
        logging.debug('Debug message')
    elif x == 1:
        logging.info('Info message')
    elif x == 2:
        logging.info('Warning message')
    elif x == 3:
        logging.info('Error message')
    elif x == 4:
        logging.info('Critical message')

    time.sleep(1)
    return

for i in range(5):
    log_tester()

try:
    1/0
except ZeroDivisionError:
    logging.exception("Division by Zero!")