
int FUN_100811cb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10081d010(5,0xc,"ssl_cert.c",0x8e);
  if (DAT_1011a93f8 < 0) {
    FUN_10081d010(6,0xc,"ssl_cert.c",0x91);
    FUN_10081d010(9,0xc,"ssl_cert.c",0x92);
    if (DAT_1011a93f8 < 0) {
      DAT_1011a93f8 = FUN_1008b95e0(0,"SSL for verify callback",0,0,0);
    }
    uVar2 = 10;
    uVar1 = 0x9d;
  }
  else {
    uVar2 = 6;
    uVar1 = 0x9f;
  }
  FUN_10081d010(uVar2,0xc,"ssl_cert.c",uVar1);
  return DAT_1011a93f8;
}

