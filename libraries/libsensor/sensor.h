//sensor.h
#include "simpletools.h"
#include "abdrive.h"
#include "ping.h"


int getPing();

int getPingcm();

int getPingin();

int getTicksL();

int getTicksR();

int getWhiskerL();

int getWhiskerR();

int *startSensor(int pingPin, int leftWhiskerPin, int rightWhiskerPin);

void stopSensor();

void sensorUpdater();


float getXpos();

float getYpos();

float getTh();


int getXint();

int getYint();

int getThint();


float getXcm();

float getYcm();

float getThdeg();