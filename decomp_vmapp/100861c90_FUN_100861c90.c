
long FUN_100861c90(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  
  local_30 = *param_2;
  lVar1 = FUN_1008a5f10(0,&local_30,param_3,&DAT_100bdc998);
  if (lVar1 == 0) {
    FUN_100887ce0(0x10,0x91,0x75,"ec_asn1.c",0x3d0);
    lVar2 = 0;
    FUN_1008a4c40(0,&DAT_100bdc998);
  }
  else {
    lVar2 = FUN_100861d80(lVar1);
    if (lVar2 == 0) {
      FUN_100887ce0(0x10,0x91,0x7f,"ec_asn1.c",0x3d6);
      FUN_1008a4c40(lVar1,&DAT_100bdc998);
      lVar2 = 0;
    }
    else {
      if (param_1 != (long *)0x0) {
        if (*param_1 != 0) {
          FUN_10085b0c0();
        }
        *param_1 = lVar2;
      }
      FUN_1008a4c40(lVar1,&DAT_100bdc998);
      *param_2 = local_30;
    }
  }
  return lVar2;
}

