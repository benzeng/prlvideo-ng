
int FUN_100be7420(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100bf2780(5,0xc,"ssl_cert.c",0x8e);
  if (DAT_1023031c8 < 0) {
    FUN_100bf2780(6,0xc,"ssl_cert.c",0x91);
    FUN_100bf2780(9,0xc,"ssl_cert.c",0x92);
    if (DAT_1023031c8 < 0) {
      DAT_1023031c8 = FUN_100c94b60(0,"SSL for verify callback",0,0,0);
    }
    uVar2 = 10;
    uVar1 = 0x9d;
  }
  else {
    uVar2 = 6;
    uVar1 = 0x9f;
  }
  FUN_100bf2780(uVar2,0xc,"ssl_cert.c",uVar1);
  return DAT_1023031c8;
}

