int LED = 9;
int power = 255./ 5.;
int Short = 400;
int Long = Short * 2;
int Pause = Short;
int Gap = Long;
int Space = 800;
int icount;
char ch;
int len = 0;
String input = "";

void dot(){
  analogWrite(LED,power);
  delay(Short);
  analogWrite(LED,0);
  delay(Pause);
}
void dash(){
  analogWrite(LED,power);
  delay(Long);
  analogWrite(LED,0);
  delay(Pause);
}
void dotEnd(){
  analogWrite(LED,power);
  delay(Short);
  analogWrite(LED,0);
  delay(Gap);
}
void dashEnd(){
  analogWrite(LED,power);
  delay(Long);
  analogWrite(LED,0);
  delay(Gap);
}

void A(){
  dot();
  dashEnd();
}
void B(){
  dash();
  dot();
  dot();
  dotEnd();
}
void C(){
  dash();
  dot();
  dash();
  dotEnd();
}
void D(){
  dash();
  dot();
  dotEnd();
}
void E(){
  dotEnd();
}
void F(){
  dot();
  dot();
  dash():
  dotEnd();
}
void G(){
  dash();
  dash();
  dotEnd();
}
 void H(){
  dot();
  dot();
  dot();
  dotEnd();
}
void I(){
  dot();
  dotEnd();
}
void J(){
  dot();
  dash();
  dash();
  dashEnd();
}
void K(){
  dash();
  dot();
  dashEnd();
}
void L(){
  dot();
  dash();
  dot();
  dotEnd();
}
void M(){
  dash();
  dashEnd();
}
void N(){
  dash();
  dotEnd();
}
void O(){
  dash();
  dash();
  dashEnd();
}
void P(){
  dot();
  dash();
  dash();
  dotEnd();
}
void Q(){
  dash();
  dash();
  dot();
  dashEnd();
}
void R(){
  dot();
  dash();
  dotEnd();
}
void S(){
  dot();
  dot();
  dotEnd();
}
void T(){
  dashEnd();
}
void U(){
  dot();
  dot();
  dashEnd();
}
void V(){
  dot();
  dot();
  dot();
  dashEnd();
}
void W(){
  dot();
  dash();
  dashEnd();
}
void X(){
  dash();
  dot();
  dot();
  dashEnd();
}
void Y(){
  dash();
  dot();
  dash();
  dashEnd();
}
void Z(){
  dash();
  dash();
  dot();
  dotEnd();
}
void spaceBar(){
  delay(Space);
}

void morse(){
if(ch=='a' || ch=='A'){A();}
    else if(ch=='b' || ch=='B'){B();}
    else if(ch=='c' || ch=='C'){C();}
    else if(ch=='d' || ch=='D'){D();}
    else if(ch=='e' || ch=='E'){E();}
    else if(ch=='f' || ch=='F'){F();}
    else if(ch=='g' || ch=='G'){G();}
    else if(ch=='h' || ch=='H'){H();}
    else if(ch=='i' || ch=='I'){I();}
    else if(ch=='j' || ch=='J'){J();}
    else if(ch=='k' || ch=='K'){K();}
    else if(ch=='l' || ch=='L'){L();}
    else if(ch=='m' || ch=='M'){M();}
    else if(ch=='n' || ch=='N'){N();}
    else if(ch=='o' || ch=='O'){O();}
    else if(ch=='p' || ch=='P'){P();}
    else if(ch=='q' || ch=='Q'){Q();}
    else if(ch=='r' || ch=='R'){R();}
    else if(ch=='s' || ch=='S'){S();}
    else if(ch=='t' || ch=='T'){T();}
    else if(ch=='u' || ch=='U'){U();}
    else if(ch=='v' || ch=='V'){V();}
    else if(ch=='w' || ch=='W'){W();}
    else if(ch=='x' || ch=='X'){X();}
    else if(ch=='y' || ch=='Y'){Y();}
    else if(ch=='z' || ch=='Z'){Z();}
    else if(ch==' '){spaceBar;}
    else
    Serial.println("Unknown symbol!");
}

void String2Morse(){
  len = input.length();
  for (int icount=0; icount<len; icount=icount+1);
  ch = input.charAt(icount);
}


void setup(){
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("Type your message: "); //prints prompt script
}


void loop(){
  while(Serial.available()==0){ //loop cycles in wait loop until something is typed in
    
  }
  String input=Serial.readString();
  String2Morse();
  
  Serial.println("Your message is (look at LED)");
  Serial.println("");
  Serial.println("");
  int othercounter = 0;
  othercounter = othercounter+1;
  Serial.println("Type your ");
  Serial.print(othercounter);
  Serial.print("message: "); //prints prompt script
}
