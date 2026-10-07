
int FUN_10081cd30(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((DAT_1011c0600 == 0) && (DAT_1011c0600 = FUN_100884e10(), DAT_1011c0600 == 0)) {
    uVar3 = 0xdd;
  }
  else {
    lVar2 = FUN_10087d050(param_1);
    if (lVar2 != 0) {
      iVar1 = FUN_1008852e0(DAT_1011c0600,lVar2);
      if (iVar1 != 0) {
        return iVar1 + 0x29;
      }
      FUN_10081e1a0(lVar2);
      return 0;
    }
    uVar3 = 0xe1;
  }
  FUN_100887ce0(0xf,0x65,0x41,"cryptlib.c",uVar3);
  return 0;
}

