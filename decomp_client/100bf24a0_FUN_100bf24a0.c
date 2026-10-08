
int FUN_100bf24a0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_102315ff0 == 0) && (DAT_102315ff0 = FUN_100c60010(), DAT_102315ff0 == 0)) {
    uVar3 = 0xdd;
  }
  else {
    lVar2 = FUN_100c58250(param_1);
    if (lVar2 != 0) {
      iVar1 = FUN_100c604e0(DAT_102315ff0,lVar2);
      if (iVar1 != 0) {
        return iVar1 + 0x29;
      }
      FUN_100bf3910(lVar2);
      return 0;
    }
    uVar3 = 0xe1;
  }
  FUN_100c62ee0(0xf,0x65,0x41,"cryptlib.c",uVar3);
  return 0;
}

