
long FUN_100c3ce90(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_30;
  
  local_30 = *param_2;
  lVar1 = FUN_100c81490(0,&local_30,param_3,&DAT_10224ccd8);
  if (lVar1 == 0) {
    FUN_100c62ee0(0x10,0x91,0x75,"ec_asn1.c",0x3d0);
    lVar2 = 0;
    FUN_100c801c0(0,&DAT_10224ccd8);
  }
  else {
    lVar2 = FUN_100c3cf80(lVar1);
    if (lVar2 == 0) {
      FUN_100c62ee0(0x10,0x91,0x7f,"ec_asn1.c",0x3d6);
      FUN_100c801c0(lVar1,&DAT_10224ccd8);
      lVar2 = 0;
    }
    else {
      if (param_1 != (long *)0x0) {
        if (*param_1 != 0) {
          FUN_100c362c0();
        }
        *param_1 = lVar2;
      }
      FUN_100c801c0(lVar1,&DAT_10224ccd8);
      *param_2 = local_30;
    }
  }
  return lVar2;
}

