
long FUN_1008bcda0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_100821870(param_2);
  if (lVar1 == 0) {
    FUN_100887ce0(0xb,0x88,0x6d,"x509_att.c",0xe4);
  }
  else {
    lVar2 = FUN_1008bcbe0(param_1,lVar1,param_3,param_4,param_5);
    if (lVar2 != 0) {
      return lVar2;
    }
    FUN_100899890(lVar1);
  }
  return 0;
}

