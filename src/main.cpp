#include <Arduino.h>
#include <Keyboard.h>
int state = 0;
int level;
int oldstate;
int aantal;
int stateb;
int oldstateb;
int statec;
int levelb;
int oldstatec;
int aantalb;
int stated;
int leveld;
int oldstated;
int aantald;
int statee;
int oldstatee;
int stateg = 0;
int levelg;
int oldstateg;
int aantalg;
int statel = 0;
int levell;
int oldstatel;
int aantall;

void setup()
{
  // make pin 2 an input and turn on the
  // pullup resistor so it goes high unless
  // connected to ground:
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  Keyboard.begin();
}

void loop()
{

  state = digitalRead(3);
  stateb = digitalRead(1);
  statec = digitalRead(4);
  stated= digitalRead(5);
  statee =digitalRead(6);
  stateg =digitalRead(7);
  statel =digitalRead(8);
  if (state != oldstate && state == 1)
  {

    level = aantal;
    aantal++;
    if (aantal == 4)
    {
      aantal = 0;
    }
  }
  switch (level)
  {
  case 0:
    Keyboard.print('e');
    Keyboard.print('b');
    break;
  case 1:
    Keyboard.print('b');
    Keyboard.print('c');
    break;
  case 2:
    Keyboard.print('c');
    Keyboard.print('d');

    break;
  case 3:
    Keyboard.print('d');
    Keyboard.print('e');
    break;
  }
  level = 5;
  oldstate = state;
  while (digitalRead(2) == 1)
  {
    Keyboard.press('p');
  }
  Keyboard.release('p');
  if (stateb != oldstateb && stateb == 1)
  {
    Keyboard.write('z');
    Keyboard.write('x');
    Keyboard.write('v');
  }
  oldstateb = stateb;
  if (statec != oldstatec && statec == 1)
  {

    levelb = aantalb;
    aantalb++;
    if (aantalb == 6)
    {
      aantalb = 0;
    }
  }
  switch (levelb)
  {
  case 0:
    Keyboard.print('u');
    Keyboard.print('q');
    break;
  case 1:
    Keyboard.print('q');
    Keyboard.print('w');
    break;
  case 2:
    Keyboard.print('w');
    Keyboard.print('r');

    break;
  case 3:
    Keyboard.print('r');
    Keyboard.print('t');
    break;
  case 4:
    Keyboard.print('t');
    Keyboard.print('y');
    break;
  case 5:
    Keyboard.print('y');
    Keyboard.print('u');
    break;
  }
  levelb = 6;
  oldstatec = statec;
  if (stated != oldstated && stated == 1)
  {

    leveld = aantald;
    aantald++;
    if (aantald == 4)
    {
      aantald = 0;
    }
  }
  switch (leveld)
  {
  case 0:
    Keyboard.print('l');
    Keyboard.print('h');
    break;
  case 1:
    Keyboard.print('h');
    Keyboard.print('j');
    break;
  case 2:
    Keyboard.print('j');
    Keyboard.print('k');

    break;
  case 3:
    Keyboard.print('k');
    Keyboard.print('l');
    break;
  }
  leveld = 5;
  oldstated = stated;
    if (statee != oldstatee && statee == 1)
  {
    Keyboard.write('.');
    Keyboard.write(',');
  }
  oldstatee = statee;
   if (stateg != oldstateg && stateg == 1)
  {

    levelg = aantalg;
    aantalg++;
    if (aantalg == 4)
    {
      aantalg = 0;
    }
  }
  switch (levelg)
  {
  case 0:
    Keyboard.print('4');
    Keyboard.print('1');
    break;
  case 1:
    Keyboard.print('1');
    Keyboard.print('2');
    break;
  case 2:
    Keyboard.print('2');
    Keyboard.print('3');

    break;
  case 3:
    Keyboard.print('3');
    Keyboard.print('4');
    break;
  }
  levelg = 5;
  oldstateg = stateg;
  if (statel != oldstatel && statel == 1)
  {

    levell = aantall;
    aantall++;
    if (aantall == 3)
    {
      aantall = 0;
    }
  }
  switch (levell)
  {
  case 0:
    Keyboard.print('5');
    break;
  case 1:
    Keyboard.print('5');
    Keyboard.print('6');
    break;
  case 2:
    Keyboard.print('6');

    break;
  }
  levell = 5;
  oldstatel = statel;
}